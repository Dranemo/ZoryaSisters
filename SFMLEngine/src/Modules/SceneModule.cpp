#include "Modules/SceneModule.h"
#include "ModuleManager.h"

#include <unordered_map>



SceneModule::SceneModule(): Module()
{
	font.loadFromFile("Font/arial.ttf");
	//Scene* main_scene = new Scene("MainScene");
	//scenes.push_back(main_scene);
	//mainScene = main_scene;
}

void SceneModule::Start()
{
	Module::Start();

	timeModule = moduleManager->GetModule<TimeModule>();
	windowModule = moduleManager->GetModule<WindowModule>();
}

void SceneModule::Render()
{
	Module::Render();

	for (const Scene* scene : scenes)
	{
		scene->Render(windowModule->GetWindow());
	}
}

void SceneModule::Update()
{
	Module::Update();
	std::unordered_map<sf::Keyboard::Key, bool>* pressed_input = moduleManager->GetModule<WindowModule>()->GetPressed();

	// bloque et update que la derniere scene du vecteur
	scenes[scenes.size() - 1]->Update(timeModule->GetDeltaTime(), pressed_input);

	/*for (const Scene* scene : scenes)
	{
		scene->Update(timeModule->GetDeltaTime(), pressed_input);
	}*/
}

Scene* SceneModule::GetScene(const std::string& _scene_name) const
{
	for (Scene* scene : scenes)
	{
		if (scene->GetName() == _scene_name)
		{
			return scene;
		}
	}
	return nullptr;
}
