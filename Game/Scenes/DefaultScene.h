#pragma once
#include "RectangleShapeRenderer.h"
#include "Scene.h"
#include "SquareCollider.h"

class DefaultScene final : public Scene
{
public:
	DefaultScene() : Scene("DefaultScene")
	{
		GameObject* player = CreateDummyGameObject("Player", 200.f, sf::Color::Red);

		GameObject* enemy = CreateDummyGameObject("Enemy", 400.f, sf::Color::Blue);
		GameObject* enemy2 = CreateDummyGameObject("Enemy2", 0.f, sf::Color::Green);

		float sizeWall = 50.f;
		CreateWallObject("Wall1", 4 * sizeWall, 1 * sizeWall); // Cr�e un mur aux coordonn�es
		CreateWallObject("Wall1", 5 * sizeWall, 2 * sizeWall);
		CreateWallObject("Wall1", 6 * sizeWall, 3 * sizeWall);
	}

	GameObject* CreateDummyGameObject(const std::string& _name, const float _position, const sf::Color _color)
	{
		GameObject* game_object = CreateGameObject(_name);
		game_object->SetPosition(Maths::Vector2f(_position, _position));

		SquareCollider* square_collider = game_object->CreateComponent<SquareCollider>();
		square_collider->SetWidth(20.f);
		square_collider->SetHeight(20.f);

		RectangleShapeRenderer* shape_renderer = game_object->CreateComponent<RectangleShapeRenderer>();
		shape_renderer->SetColor(_color);
		shape_renderer->SetSize(Maths::Vector2f(200.f, 200.f));
		return game_object;
	}


	void CreateWallObject(const std::string & _name, const float _x, const float _y)
	{
		GameObject* wall = CreateGameObject(_name);
		wall->SetPosition(Maths::Vector2f(_x, _y));

		SquareCollider* squareCollider = wall->CreateComponent<SquareCollider>();
		squareCollider->SetWidth(50.f);
		squareCollider->SetHeight(50.f);

		RectangleShapeRenderer* shapeRenderer = wall->CreateComponent<RectangleShapeRenderer>();
		shapeRenderer->SetColor(sf::Color::White); // Couleur du mur
		shapeRenderer->SetSize(Maths::Vector2f(50.f, 50.f)); // Taille du mur
	}

	
};
