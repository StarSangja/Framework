#include "Enemy.h"
#include "SceneManager.h"
#include "InputManager.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void Enemy::Initialize()
{
}

void Enemy::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_ENTER)
	{
		SceneManager::GetInstance()->SetScene(EXIT);
	}
}

void Enemy::Render()
{
	cout << "Enemy" << endl;
}

void Enemy::Release()
{
}

