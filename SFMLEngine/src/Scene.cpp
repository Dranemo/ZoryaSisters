#include "Scene.h"

#include "Modules/SceneModule.h" 
#include "Engine.h"

#include <unordered_map>
#include <SFML/Window/Event.hpp>

#include <SFML/Graphics/RenderWindow.hpp>

Scene::Scene(const std::string& _name)
{
	name = _name;
	//font_scene = Engine::GetInstance()->GetModuleManager()->GetModule<SceneModule>()->GetFont();

	Engine* engine = Engine::GetInstance();
	ModuleManager* moduleManager = engine->GetModuleManager();
	SceneModule* sceneModule = moduleManager->GetModule<SceneModule>();
	font_scene = sceneModule->GetFont();
}

void Scene::Update(const float _delta_time, std::unordered_map<sf::Keyboard::Key, bool>* pressed_input) const
{
	for (int i = 0; i < gameObjects.size(); i++)
	{
		gameObjects[i]->Update(_delta_time, pressed_input);
	}
}

void Scene::Render(sf::RenderWindow* _window) const	
{
	for (GameObject* const& game_object : gameObjects)
	{
		game_object->Render(_window);
	}
}

std::string Scene::GetName() const
{
	return name;
}

GameObject* Scene::CreateGameObject(const ObjectType& _type, std::string _name)
{
	GameObject* const game_object = new GameObject();
	game_object->SetType(_type);
	game_object->SetName(_name);
	gameObjects.push_back(game_object);
	return game_object;
}

void Scene::DestroyGameObject(const GameObject* _game_object)
{
	for (std::vector<GameObject*>::iterator it = gameObjects.begin(); it != gameObjects.end(); ++it)
	{
		if (*it == _game_object)
		{
			gameObjects.erase(it);
			delete _game_object;
			return;
		}
	}
}

GameObject* Scene::FindGameObject(const std::string& _name) const
{
	for (GameObject* const& game_object : gameObjects)
	{
		if (game_object->GetName() == _name)
		{
			return game_object;
		}
	}
	return nullptr;
}


GameObject* Scene::CreateButton(const ObjectType& _type, std::string _name, Maths::Vector2f _position, const sf::Color _color, Maths::Vector2u size, Capacity* _object)
{
	GameObject* game_object = CreateGameObject(_type, _name);
	game_object->SetPosition(_position);

	SquareCollider* square_collider = game_object->CreateComponent<SquareCollider>();
	square_collider->SetWidth(20.f);
	square_collider->SetHeight(20.f);

	RectangleShapeRenderer* shape_renderer = game_object->CreateComponent<RectangleShapeRenderer>();
	shape_renderer->SetColor(_color);
	shape_renderer->SetSize(Maths::Vector2f(size.x, size.y));

	Button* button = game_object->CreateComponent<Button>();
	button->SetObject(_object);

	return game_object;
}

GameObject* Scene::CreateButton(const ObjectType& _type, std::string _name, Maths::Vector2f _position, const sf::Color _color, Maths::Vector2u size, Capacity* _object, std::string button_text, sf::Color button_color, int _caractere_size)
{
	GameObject* game_object = CreateGameObject(_type, _name);
	game_object->SetPosition(_position);

	SquareCollider* square_collider = game_object->CreateComponent<SquareCollider>();
	square_collider->SetWidth(20.f);
	square_collider->SetHeight(20.f);

	RectangleShapeRenderer* shape_renderer = game_object->CreateComponent<RectangleShapeRenderer>();
	shape_renderer->SetColor(_color);
	shape_renderer->SetSize(Maths::Vector2f(size.x, size.y));

	TextRenderer* text_renderer = game_object->CreateComponent<TextRenderer>();
	text_renderer->SetString(button_text);
	text_renderer->SetColor(button_color);
	text_renderer->SetSize(Maths::Vector2f(size.x, size.y));
	text_renderer->SetCaracterSize(_caractere_size);

	Button* button = game_object->CreateComponent<Button>();
	button->SetObject(_object);

	return game_object;
}

GameObject* Scene::CreateText(const ObjectType& _type, std::string _name, Maths::Vector2f _position, const sf::Color _color, Maths::Vector2u size, int _caractere_size) {
	GameObject* game_object = CreateGameObject(_type, _name);
	game_object->SetPosition(_position);

	TextRenderer* text_renderer = game_object->CreateComponent<TextRenderer>();
	text_renderer->SetColor(_color);
	text_renderer->SetSize(Maths::Vector2f(size.x, size.y));
	text_renderer->SetCaracterSize(_caractere_size);

	return game_object;
}

