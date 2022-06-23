// ** Framework v1.1
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

// ** Singleton
/*

	1. ��𼭵� ������ ����� �� �ִ�.
	2. �����ʹ� �ѱ������� �־���Ѵ�.
	3. ��ü�� �ν��Ͻ��� ���� 1���� ����
	4. �̱����� �ϳ��� ���� �����ڷ� ���
	5. �⺻������ �ܺο��� ����� ����� �Ѵ�.

*/

/*
class Singleton
{
private:
	static Singleton* Instance;	// static�� ����ϸ� ������ ����  , static ��� �Ϸ��� �ܺο� ���ӽ����̽� �ʱ�ȭ

public:
	static Singleton* GetInstance()
	{
		if (GetInstance == nullptr)
			Instance = new Singleton;

		return Instance;
	}

private:
	int Number;

public:
	int GetNumber()const { return Number; }

	void SetNumber(const int& _Number) { Number = _Number; }

private:
	Singleton() : Number(0) {} // �ܺο��� �� ����� �Ѵ�.

public:
	~Singleton() {}

};


Singleton* Singleton::Instance = nullptr; // ���̽����̽�

*/

int main(void)
{
	/*
	
	Singleton::GetInstance()->SetNumber(10);

	cout << Singleton::GetInstance()->GetNumber() << endl;
	
	*/

	/*
	MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64(); // ** 1/1000 sec
	

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

#pragma region GetTickCount64
/*
* int main(void)
{
	ULONGLONG Time = GetTickCount64(); // ** 1/1000 sec

	int Count = 0;

	char* Array[30][120];

	for (int y = 0; y < 30; ++y)
	{
		for (int x = 0; x < 120; ++x)
		{
			Array[y][x] = (char*)"******************************";
			
		}
		
	}

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();
						
			system("cls");

			//cout << Count++ << endl;
			for (int y = 0; y < 30; ++y)
			{
				for (int x = 0; x < 120; ++x)
					cout << Array[y][x];
					cout << endl;
			}

		}
	}

	return 0;
}

*/
#pragma endregion
