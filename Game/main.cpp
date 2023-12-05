#include "Engine.h"
#include "SceneModule.h"
#include "Scenes/DefaultScene.h"
#include "Scenes/SelectCapacityScene.h"

int main()
{
	const Engine* engine = Engine::GetInstance();

	engine->Init();

	SceneModule* scene_module = engine->GetModuleManager()->GetModule<SceneModule>();
	scene_module->SetScene<SelectCapacityScene>();

	engine->Run();

	return 0;
}