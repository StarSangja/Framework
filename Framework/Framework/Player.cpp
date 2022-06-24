#include "Player.h"
#include "InputManager.h"

Player::Player() 
	: Horizontal(0), Vertical(0) { }
Player::~Player() { }


void Player::Initialize()
{
	Horizontal = 0;
	Vertical = 0;
}

void Player::Update()
{
	
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KYE_UP)
		Vertical += 1;
		cout << "KYE_UP" << endl;

	if (dwKey & KYE_DOWN)
		Vertical -= 1;
		cout << "KYE_DOWN" << endl;

	if (dwKey & KYE_LEFT)
		Horizontal -= 1;
		cout << "KYE_LEFT" << endl;

	if (dwKey & KYE_RIGHT)
		Horizontal += 1;
		cout << "KYE_RIGHT" << endl;
		
}

void Player::Render()
{
	cout << "X : " << Horizontal << endl;
	cout << "Y : " << Vertical << endl;
	//Message("Player");
}

void Player::Release()
{

}