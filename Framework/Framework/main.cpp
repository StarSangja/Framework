// ** Framework v0.2

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
	
	
	
	return 0;

}






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

// ** 8. �������� & ��������
// ** 9. �����ε� & �������̵�
// ** 10. ������ �����ε�
// ** 11. ������ (����)

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

#pragma endregion


