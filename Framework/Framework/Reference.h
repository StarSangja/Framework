#pragma once


// ** 1. ��������
/*
private:
	// ** �ڱ� �ڽŸ� ��� ���

protected:
	// ** ��Ӱ��� ������ ����, ���� Ŭ���� ���Ұ�, �ܺ� ��� �Ұ�

public:
	// ** ������ ����
*/

// ** 2. ����ȭ
/*
	�Լ��� �����Ͱ� ���� ���ִ� ����
	�� ����� ���� �� �� �ִ�.

	�� ������ ����� ���� �� �� �ִ�.
	������ �Լ��� ���� �־�� �Ѵ�.

	** ������(����)�� ���(�Լ�, �޼���)�� �������� ����ϴ� ��.
*/

// ** 3. �߻�ȭ
/*
	�������� �ǹ�?
	�л��̶� �ҷ��µ� ���� �ҷ����� �𸥴�.

	�п��̶�� �߻����� �����ȿ�
	�л����� ������ �� �ְ� �������� ������ �� �ְ� �������� ���� �����ְ�
	�پ��� ���·� ���� �� �ִ�.

	// ** �������� �ʴ� ���¸� �߻�Ŭ���� ��� ��.
	// ** ��) ���, �л�, ���� ���� ����� Ư������ �ʴ� ���
	// ** ��) "ȫ�浿�� �л��̴�." ��� ȫ�浿�̶�� Ư�� ����� �����Ƿ�,
				�߻��� ���·� �� �� ����.

*/

// ** 4. ���
/*
	�� �״�� ����� ���Ѵ�.

	public : ������ ��� �ϴ� ��
	protecte : ���� ���� ��� �ϴ� ȭ���
	private : ���� ��� �ϴ� ��

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

// ** 5. ������
/*
	���� �� �� �ִ� ���� ������ �л��ε� ���� ����ũ�� ���� �ְ�, �� ����ũ �ϼ����ְ�, �����۸�
	�Ű� ���� �� �� �ְ�  �ᱹ �л��̶�� ī�װ��� ���� ������
	// ** �پ��� ���·� ������ �� �ִ�.
*/

// ** 6. namespace
/*
	������ ������ �����Ͽ� ������ �̸��� �Լ��� ����� �� �ֵ��� ��.

*/

// ** 7. ������ & �Ҹ��� & ���� ������
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

	// ** ����ڰ� ȣ�� ���� �ʾƵ� ������ ȣ���
	// ** Ŭ������ ������ ���� ȣ��
	Object()
	{
		cout << "������" << endl;
	};


	// ** ����ڰ� ȣ���ϴ� ������ ȣ���
	// ** �������� ȣ���� �ȴ�.
	// ** ���ް��� ������ �ڷ����� ���� ������(�ڵ�)���� ȣ���
	Object(int _Number)
	{
		cout << "���� ������ : int" << endl;
		Number = _Number;
	};

	Object(float _Number)
	{
		cout << "���� ������ : float" << endl;
		Number = (int)_Number;
	};

	Object(char* _Name)
	{
		Name = _Name;
	};

	// ** Ŭ������ �����Ǳ� ����
	~Object()
	{
		cout << "�Ҹ���" << endl;
	};

	/*
	Object(const Object& _obj)
	{
		cout << "���� ������ : float" << endl;

	};


Object(Object* _obj)
{
	Name = _obj->Name;

};
};


int main(void)
{

	//Object o = Object();  // ������
	//Object o = Object(10); // �̷��� �ϸ� ���������
	//Object o = Object(3.141592f); // float ���� �־ �Ű����� float�� ��������ڰ� �ڵ����� ȣ���

	//cout << "Hello Wolrd!" << endl;

	Object o1;

	o1.Number = 10;
	o1.Name = (char*)"ȫ�浿";

	Object o2 = Object(o1);

	o1.Name = (char*)"�Ӳ���";

	cout << o2.Number << endl;
	cout << o2.Name << endl;




	return 0;

}
*/

// ** 8. �������� & ��������
/*

*/

// ** 9. �����ε� & �������̵�
/*
	�����ε�: ���ް��� ������ �ڷ����� ���� ������(�ڵ�)���� ȣ��Ǵ� �Լ� (��������ڿ� ����.)
			  �����ε��� ������ �ȴ�.

	�������̵�: ����� ���ִ�. �������̵��� ����� �ƴϸ� �ȵȴ�.
				�θ� �ڽ����� �� �ִ°��

	���ӽ����̽� ���װ�? ::

class Object
{
public:
	virtual void Output() // virtual �ؾ� override ���� ����.
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

// ** 10. ������ �����ε�
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

// ** 11. ������ (����)
/*
	1. * ������, & �ּҹ�ȯ ������
	2. �����ͺ��� ��� [�����Ҵ�]
	3. Ŭ���� & ����ü�� [.](��) �ƴϸ� [->](ȭ��ǥ)�� �����Ѵ�.
	4. [�����Ҵ�] �ߴٸ� �ݵ�� [�Ҵ�����]

	�޸� ���� ö���� �ϱ�

*/

// ** inline ������ ����ǰ� �����ִ� ���

// ** const ��� �ñ�
/*
	const ���ȭ Ű����
	�ǹ��� �ٸ�������� ���� const ������ �ǵ��� �ʰ� �˷��ִ� �뵵?
*/

// ** & ���忬����
/*
	��Ʈ������
	���۷��� ������
	�� ������
	�ּҹ�ȯ ������

*/

// ** ��ü(Object)
/*
	��� ���� ��ü�� �� �� �ִ�.
	Ű���� , ���콺, �����, ���
	��ü�� 1~5�� ��� ���� �� �ִ�.

*/

// ** Ŭ����(Class)
/*
	��� Ŭ������ ��ü�� �� ����.
	��� ��ü�� Ŭ������ �Ǿ��ִ�.

	Ŭ������ ��ü�� ������ �� �ִ� ����
	Ŭ������ ������ ��ü ��ü�� �ƴϴ�.

*/


#pragma region Framework v0.1
/*

struct AAA // ����ü
{
	int Number;
};


class BBB // Ŭ����
{
private:
	int m_iNumber = 0;

public:
	void Initialize() { m_iNumber = 0; }
	// ** �����͸� ����ϴ� ���� ���������� ������ �Ұ�.
	int GetNumber()	{return m_iNumber;}

	// ** �����͸� �����ϴ� ���� ���������� ������ �Ұ�
	void SetNumber(int _Number) { m_iNumber = _Number; }

};

class CCC // Ŭ����
{
private:
	int m_iNumber = 0;

public:
	void Initialize() { m_iNumber = 100; }
	// ** �����͸� ����ϴ� ���� ���������� ������ �Ұ�.
	int GetNumber() { return m_iNumber; }

	// ** �����͸� �����ϴ� ���� ���������� ������ �Ұ�
	void SetNumber(int _Number) { m_iNumber = _Number; }

};

void Initialize(int& _Number);

int main(void)
{
	AAA a;
	Initialize(a.Number);
	cout << a.Number << endl;

	BBB b;
	// b.GetNumber; ����� �� ����.
	//b.GetNumber(); �ٷ� ����� �� ����
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
		cout << "ȫ�浿" << endl;
	}
}

using namespace AAA; // using ���ذɷ� ó ��
using AAA::Output; // �̷��� ��� �� �� �ִ�.

namespace BBB
{
	void Output()
	{
		cout << "�Ӳ���" << endl;
	}
}

// using namespace BBB;


class Parent
{
private:
	// ** �ڱ� �ڽŸ� ��� ���

protected:
	// ** ��Ӱ��� ������ ����, ���� Ŭ���� ���Ұ�, �ܺ� ��� �Ұ�

public:
	// ** ������ ����
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
	// new Child �ص� �⺻���� ���̽��� �θ�Ŭ������ Parent �̴�.
	Parent* p = new Child;

	p->Initialize();
	p->Output();

	// �ڽĲ� ������ ����ȯ�� �Ͽ��� �Ѵ�.
	//((Child*)p)->Initialize();
	//((Child*)p)->Output();

	// �Ǵ� �θ�Ŭ���� ����� �Լ��� virtual�� ���δ�.

	*/

	/*
	Parent p; // �߻�Ŭ������ ��üȭ ��ų�� ��� �ν��Ͻ�ȭ ����.

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
		// ** ����ڰ� ȣ�� ���� �ʾƵ� ������ ȣ���
		// ** Ŭ������ ������ ���� ȣ��
		Object()
		{
			cout << "������" << endl;
		};


		// ** ����ڰ� ȣ���ϴ� ������ ȣ���
		// ** �������� ȣ���� �ȴ�.
		// ** ���ް��� ������ �ڷ����� ���� ������(�ڵ�)���� ȣ���
		Object(int _Number)
		{
			cout << "���� ������ : int" << endl;
			Number = _Number;
		};

		Object(float _Number)
		{
			cout << "���� ������ : float" << endl;
			Number = (int)_Number;
		};

		Object(char* _Name)
		{
			Name = _Name;
		};

		// ** Ŭ������ �����Ǳ� ����
		~Object()
		{
			cout << "�Ҹ���" << endl;
		};


		Object(const Object& _obj)
		{
			cout << "���� ������ : float" << endl;

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

