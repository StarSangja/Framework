// ** Framework v2.1
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

// ** Input
/*
	
*/

// 00000000 00000000 00000000 00000001 = 1
// 00000000 00000000 00000000 00000010 = 2
// 00000000 00000000 00000000 00000100 = 4
// 00000000 00000000 00000000 00001000 = 8

// 00000001 = 1
// 00000010 = 2
// 00000100 = 4
// 00001000 = 8
// 00010000 = 16
// 00100000 = 32
// 01000000 = 64
// 10000000 = 128



int main(void)
{

	/*
	DWORD InputKey = 0;

	cout << "�Է� : "; cin >> InputKey;

	if (InputKey & KYE_UP)
		cout << "KEY_UP" << endl;

	if (InputKey & KYE_DOWN)
		cout << "KYE_DOWN" << endl;

	if (InputKey & KYE_LEFT)
		cout << "KYE_LEFT" << endl;

	if (InputKey & KYE_RIGHT)
		cout << "KYE_RIGHT" << endl;

	if (InputKey & KYE_SPACE)
		cout << "KYE_SPACE" << endl;

	if (InputKey & KYE_ENTER)
		cout << "KYE_ENTER" << endl;

	if (InputKey & KYE_CTRL)
		cout << "KYE_CTRL" << endl;

	if (InputKey & KYE_ALT)
		cout << "KYE_ALT" << endl;
	*/

	/*
	Singleton::GetInstance()->SetNumber(10);
	cout << Singleton::GetInstance()->GetNumber() << endl;
	*/


	/*
	
	MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64(); // 1 / 1000

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			Main.Update();
			Main.Render();
		}
	}
	*/


	return 0;
}


