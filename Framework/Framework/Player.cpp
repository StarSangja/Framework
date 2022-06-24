#include "Player.h"
#include "SceneManager.h"
#include "InputManager.h"

Player::Player()
{
}

Player::~Player()
{
}


void Player::Initialize()
{
}

void Player::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_ENTER)
	{
		SceneManager::GetInstance()->SetScene(EXIT);
	}
}

void Player::Render()
{
	cout << "Player" << endl;
}

void Player::Release()
{
}

