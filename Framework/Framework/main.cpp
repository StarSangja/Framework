// ** Framework v1.1
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"

// ** Singleton
/*

	1. 어디서든 가져다 사용할 수 있다.
	2. 데이터는 한군데에만 있어야한다.
	3. 객체의 인스턴스가 오직 1개만 생성
	4. 싱글톤은 하나만 만들어서 관리자로 사용
	5. 기본적으로 외부에서 만들수 없어야 한다.

*/

/*
class Singleton
{
private:
	static Singleton* Instance;	// static을 사용하면 정적인 형태  , static 사용 하려면 외부에 네임스페이스 초기화

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
	Singleton() : Number(0) {} // 외부에서 못 만들게 한다.

public:
	~Singleton() {}

};


Singleton* Singleton::Instance = nullptr; // 네이스페이스

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
