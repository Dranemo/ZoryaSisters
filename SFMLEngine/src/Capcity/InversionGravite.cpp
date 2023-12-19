#include "Capacity/InversionGravite.h"
#include <Scene.h>
#include <Engine.h>
#include <Modules/SceneModule.h>
#include <Components/Player.h>
#include <iostream>

//Sound
InversionGravite::InversionGravite() {
	soundBufferInversionGravite = new sf::SoundBuffer;
	if (!soundBufferInversionGravite->loadFromFile("Assets/Sons/inversion_gravite.wav")) {
		std::cout << "erreur de chargement du fichier" << std::endl;
	}
	soundInversionGravite = new sf::Sound;
}

InversionGravite::~InversionGravite() {
	delete soundBufferInversionGravite;
	delete soundInversionGravite;
}

void InversionGravite::PlaySound() {
	soundInversionGravite->setBuffer(*soundBufferInversionGravite);
	soundInversionGravite->play();
}

void InversionGravite::StopSound() {
	soundInversionGravite->stop();
}

void InversionGravite::GraviteInversion(GameObject* player, const float _delta_time)
{
	if (count == 0)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
		{
			if (!player->GetComponent<SquareCollider>()->GetCanMoving()["down"])
			{
				inversionClock.restart();
				inversion = true;
				count = 1;
			}
			if (!soundPlayed) {
				PlaySound();
				soundInversionGravite->setVolume(100);
				soundPlayed = true; // Marquer que le son a �t� jou�
			}
		}
	}
	if (inversion == true && player->GetComponent<SquareCollider>()->GetCanMoving()["up"])
	{
		if (inversionClock.getElapsedTime().asSeconds() <= 1) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (500 * _delta_time)));
		}
		else if (inversionClock.getElapsedTime().asSeconds() <= 2) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (400 * _delta_time)));
		}
		else if (inversionClock.getElapsedTime().asSeconds() <= 3) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (300 * _delta_time)));
		}
		else if (inversionClock.getElapsedTime().asSeconds() <= 4) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (200 * _delta_time)));
		}
		else if (inversionClock.getElapsedTime().asSeconds() <= 5) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (150 * _delta_time)));
		}
		else if (inversionClock.getElapsedTime().asSeconds() <= 6) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (100 * _delta_time)));
		}
		else if (inversionClock.getElapsedTime().asSeconds() <= 7) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (75 * _delta_time)));
		}
		else if (inversionClock.getElapsedTime().asSeconds() <= 8) {
			GetCapacityOwner()->SetPosition(Maths::Vector2f(GetCapacityOwner()->GetPosition().GetX(), GetCapacityOwner()->GetPosition().GetY() - (35 * _delta_time)));
		}
		else {
			inversion = false;
		}
		
	}
}

void InversionGravite::Update(const float _delta_time, std::unordered_map<sf::Keyboard::Key, bool>* pressed_input)
{
	soundPlayed = false;

	Scene* scene = Engine::GetInstance()->GetModuleManager()->GetModule<SceneModule>()->GetMainScene();
	GameObject* player = nullptr;

	for (GameObject* const& gameObject : *scene->GetGameObjects())
	{
		if (gameObject->GetType() == PlayerType)
		{
			player = gameObject;
		}
		if (player != nullptr)
		{
			GraviteInversion(player, _delta_time);
		}
	}
	
}