#pragma once


// ** 1. 정보은닉
/*
private:
	// ** 자기 자신만 사용 사능

protected:
	// ** 상속간의 공개된 상태, 비상속 클래스 사용불가, 외부 사용 불가

public:
	// ** 공개된 상태
*/

// ** 2. 갭슐화
/*
	함수와 데이터가 따로 되있는 형태
	내 기능은 나만 쓸 수 있다.

	내 숨쉬기 기능은 나만 쓸 수 있다.
	각각의 함수가 따로 있어야 한다.

	** 데이터(변수)와 기능(함수, 메서드)을 묶음으로 사용하는 것.
*/

// ** 3. 추상화
/*
	포괄적인 의미?
	학생이라 불렀는데 누굴 불렀는지 모른다.

	학원이라는 추상적인 공간안에
	학생으로 존재할 수 있고 직원으로 존재할 수 있고 선생으로 있을 수도있고
	다양한 형태로 있을 수 있다.

	// ** 존재하지 않는 형태를 추상클래스 라고 한.
	// ** 예) 사람, 학생, 군인 등의 대상이 특정되지 않는 경우
	// ** 예) "홍길동은 학생이다." 라면 홍길동이라는 특정 대상이 있으므로,
				추상적 형태로 볼 수 없음.

*/

// ** 4. 상속
/*
	말 그대로 상속을 말한다.

	public : 누구나 사용 하는 것
	protecte : 가족 끼리 사용 하는 화장실
	private : 나만 사용 하는 것

	/*
	class AAA
{
protected:
	string m_str;

public:
		void Output() { cout << m_str << endl; }
};

class BBB :public AAA
{

public:
	void Initialize() { m_str = "BBB"; }
};

class CCC :public AAA
{

public:
	void Initialize() { m_str = "CCC"; }
};

int main(void)
{
	AAA a;
	a.Output();

	BBB b;
	b.Initialize();
	b.Output();

	CCC c;
	c.Initialize();
	c.Output();


return 0;

}
*/

// ** 5. 다형성
/*
	누가 될 수 있는 지는 모르지만 학생인데 검은 마스크일 수도 있고, 흰 마스크 일수도있고, 슬리퍼를
	신고 있을 수 도 있고  결국 학생이라는 카테고리에 들어가는 다형성
	// ** 다양한 형태로 존재할 수 있다.
*/

// ** 6. namespace
/*
	별도의 영역을 지정하여 동일한 이름의 함수를 사용할 수 있도록 함.

*/

// ** 7. 생성자 & 소멸자 & 복사 생성자
/*
	#include "Parent.h"
#include "Child.h"
#include "Bullet.h"

class Object
{
private:

public:
	int Number;
	char* Name;

	// ** 사용자가 호출 하지 않아도 스스로 호출됨
	// ** 클래스가 생성된 직후 호출
	Object()
	{
		cout << "생성자" << endl;
	};


	// ** 사용자가 호출하는 시점에 호출됨
	// ** 언제든지 호출이 된다.
	// ** 전달값의 개수와 자료형에 따라서 선택적(자동)으로 호출됨
	Object(int _Number)
	{
		cout << "복사 생성자 : int" << endl;
		Number = _Number;
	};

	Object(float _Number)
	{
		cout << "복사 생성자 : float" << endl;
		Number = (int)_Number;
	};

	Object(char* _Name)
	{
		Name = _Name;
	};

	// ** 클래스가 삭제되기 직전
	~Object()
	{
		cout << "소멸자" << endl;
	};

	/*
	Object(const Object& _obj)
	{
		cout << "복사 생성자 : float" << endl;

	};


Object(Object* _obj)
{
	Name = _obj->Name;

};
};


int main(void)
{

	//Object o = Object();  // 생성자
	//Object o = Object(10); // 이렇게 하면 복사생성자
	//Object o = Object(3.141592f); // float 으로 넣어서 매개변수 float인 복사생성자가 자동으로 호출됨

	//cout << "Hello Wolrd!" << endl;

	Object o1;

	o1.Number = 10;
	o1.Name = (char*)"홍길동";

	Object o2 = Object(o1);

	o1.Name = (char*)"임꺽정";

	cout << o2.Number << endl;
	cout << o2.Name << endl;




	return 0;

}
*/

// ** 8. 깊은복사 & 얕은복사
/*

*/

// ** 9. 오버로딩 & 오버라이딩
/*
	오버로딩: 전달값의 개수와 자료형에 따라서 선택적(자동)으로 호출되는 함수 (복사생성자와 같다.)
			  오버로딩은 내꺼만 된다.

	오버라이딩: 상속이 되있다. 오버라이딩은 상속이 아니면 안된다.
				부모 자식한테 다 있는경우

	네임스페이스 점네개? ::

class Object
{
public:
	virtual void Output() // virtual 해야 override 쓸수 있음.
	{
		cout << "Object :" << endl;
	}

	void Output(string _str)
	{
		cout << "Object :" << _str << endl;
	}
};

class AAA :public Object
{
public:
	void Output() override
	{
		cout << "AAA" << endl;
	}

	void Output(string _str)
	{
		cout << "AAA" << _str << endl;
	}
};

*/

// ** 10. 연산자 오버로딩
/*

struct tagInfo
{
	int Number;

	tagInfo() {};
	tagInfo() {};

};

class Object
{
private:
	tagInfo Number;
public:

	Object& operator+=(const Object& _Obj)
	{
		Info.Number += _Obj.Info.Number;
		return this;
	}

	Object& operator++()
	{
		Info.Number +=1;
		return this;
	}



	void Output()
	{
		cout << Info.Number << endl;
	}
public:
	Object() {};
	Object(int _Number) : Number(_Number) {};
	~Object() {};
};

int main(void)
{
	Object o1(tagInfo(10));
	Object o2(o1);

	o2 += o1;

	++o2;

	o2.Output();

	return 0;
}
*/

// ** 11. 포인터 (복습)
/*
	1. * 데이터, & 주소반환 연산자
	2. 포인터변수 라면 [동적할당]
	3. 클래스 & 구조체는 [.](점) 아니면 [->](화살표)로 접근한다.
	4. [동적할당] 했다면 반드시 [할당해제]

	메모리 관리 철저히 하기

*/

// ** inline 빠르게 실행되게 도와주는 기능

// ** const 사용 시기
/*
	const 상수화 키워드
	실무에 다른사람들이 볼때 const 있으면 건들지 않게 알려주는 용도?
*/

// ** & 엔드연산자
/*
	비트연산자
	레퍼런스 연산자
	비교 연산자
	주소반환 연산자

*/

// ** 객체(Object)
/*
	모든 것이 객체가 될 수 있다.
	키보드 , 마우스, 모니터, 등등
	객체는 1~5를 모두 가질 수 있다.

*/

// ** 클래스(Class)
/*
	모든 클래스는 객체일 수 없다.
	모든 객체는 클래스로 되어있다.

	클래스는 객체를 설명할 수 있는 지도
	클래스는 설명서지 객체 자체는 아니다.

*/


#pragma region Framework v0.1
/*

struct AAA // 구조체
{
	int Number;
};


class BBB // 클래스
{
private:
	int m_iNumber = 0;

public:
	void Initialize() { m_iNumber = 0; }
	// ** 데이터를 사용하는 것은 가능하지만 수정은 불가.
	int GetNumber()	{return m_iNumber;}

	// ** 데이터를 수정하는 것은 가능하지만 참조는 불가
	void SetNumber(int _Number) { m_iNumber = _Number; }

};

class CCC // 클래스
{
private:
	int m_iNumber = 0;

public:
	void Initialize() { m_iNumber = 100; }
	// ** 데이터를 사용하는 것은 가능하지만 수정은 불가.
	int GetNumber() { return m_iNumber; }

	// ** 데이터를 수정하는 것은 가능하지만 참조는 불가
	void SetNumber(int _Number) { m_iNumber = _Number; }

};

void Initialize(int& _Number);

int main(void)
{
	AAA a;
	Initialize(a.Number);
	cout << a.Number << endl;

	BBB b;
	// b.GetNumber; 사용할 수 없음.
	//b.GetNumber(); 바로 사용할 수 없음
	b.Initialize();
	//b.SetNumber(10);

	cout << b.GetNumber() << endl;

	CCC c;
	c.Initialize();

	cout << c.GetNumber() << endl;

	return 0;
}

void Initialize(int& _Number)
{
	_Number = 0;
}
*/
#pragma endregion

#pragma region Framework v0.2

/*
namespace AAA
{
	void Output()
	{
		cout << "홍길동" << endl;
	}
}

using namespace AAA; // using 써준걸로 처 줘
using AAA::Output; // 이렇게 사용 할 수 있다.

namespace BBB
{
	void Output()
	{
		cout << "임꺽정" << endl;
	}
}

// using namespace BBB;


class Parent
{
private:
	// ** 자기 자신만 사용 사능

protected:
	// ** 상속간의 공개된 상태, 비상속 클래스 사용불가, 외부 사용 불가

public:
	// ** 공개된 상태
	int m_Number;

};

class Child : public Parent
{


};

int main(void)
{
	Output();

	BBB::Output();

	return 0;
}
*/
/*
#include "Parent.h"
#include "Child.h"
#include "Bullet.h"

const int ID_Child = 0;
const int ID_Bullet = 1;


int main(void)
{
	Parent* p[2];

	p[ID_Child] = new Child;
	p[ID_Bullet] = new Bullet;

	for (int  i = 0; i < 2; ++i)
	{
		p[i]->Initialize();

	}

	while (true)
	{
		system("cls");

	}



	/*
	// new Child 해도 기본적인 베이스는 부모클래스인 Parent 이다.
	Parent* p = new Child;

	p->Initialize();
	p->Output();

	// 자식껄 쓸려면 형변환을 하여야 한다.
	//((Child*)p)->Initialize();
	//((Child*)p)->Output();

	// 또는 부모클래스 헤더의 함수에 virtual을 붙인다.

	*/

	/*
	Parent p; // 추상클래스는 개체화 시킬수 없어서 인스턴스화 못함.

	p.Initialize();
	p.Output();
	*/


	/*
	return 0;

	}
	*/

#pragma endregion

#pragma region Framework v0.3

	/*

	struct tagInfo
	{
		int Number;
	};

	class Object
	{
	protected:
		tagInfo m_Info;
	private:

	public:
		int Number;
		char* Name;

	public:
		virtual Object* Clone() = 0;



	public:
		// ** 사용자가 호출 하지 않아도 스스로 호출됨
		// ** 클래스가 생성된 직후 호출
		Object()
		{
			cout << "생성자" << endl;
		};


		// ** 사용자가 호출하는 시점에 호출됨
		// ** 언제든지 호출이 된다.
		// ** 전달값의 개수와 자료형에 따라서 선택적(자동)으로 호출됨
		Object(int _Number)
		{
			cout << "복사 생성자 : int" << endl;
			Number = _Number;
		};

		Object(float _Number)
		{
			cout << "복사 생성자 : float" << endl;
			Number = (int)_Number;
		};

		Object(char* _Name)
		{
			Name = _Name;
		};

		// ** 클래스가 삭제되기 직전
		~Object()
		{
			cout << "소멸자" << endl;
		};


		Object(const Object& _obj)
		{
			cout << "복사 생성자 : float" << endl;

		};


		Object(Object* _obj)
		{
		Name = _obj->Name;

		};

		Object(tagInfo _Info) : m_Info(_Info)
		{

		};
	};

	class Player : public Object
	{
	public:
		virtual Object* Clone() override
		{
			return new Player(*this);
		}

		void Output()
		{
			cout << m_Info.Number << endl;
		}

	public:
		Player() {};
		Player(tagInfo _Info) : Object(_Info) {  };
		~Player() {};
	};

	Object* GetObject(string _key;

	int main(void)
	{
		/*
		tagInfo Info;

		AAA a[8];

		for (int i = 0; i < 8; ++i)
		{
			Info.Number = 10;
			a[i] = AAA(Info);
		}

		for (int i = 0; i < 8; ++i)
		{
			a[i].Output();
		}


		tagInfo Info;

		map<string, Object*> PrototypeObject;

		Info.Number = 10;
		PrototypeObject["Player"] = new Player(Info);

		Object* pProtoObj = GetObject("Player");

		Object* pPlayer = nullptr;


		if (pPlayer != nullptr)
			pPlayer = pProtoObj->Clone();

		return 0;

	}

	Object* GetObject(string _key)
	{
		map<string, Object*> ::iterator iter = PrototypeObject.find(_key);

		if (iter == PrototypeObject.end())
			return nullptr;
		else
			return iter->second;
	}
	*/

#pragma endregion

#pragma region Singleton

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
/*
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

	

	return 0;
}
*/
#pragma endregion

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

