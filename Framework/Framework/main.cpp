// ** Framework v0.1

#include <iostream>

using namespace std;

// ** 1. ��������
/*

	public, private, protecte ��¼�� ...
*/

// ** 2. ����ȭ
/*
	�Լ��� �����Ͱ� ���� ���ִ� ���� 
	�� ����� ���� �� �� �ִ�.

	�� ������ ����� ���� �� �� �ִ�.
	������ �Լ��� ���� �־�� �Ѵ�.
*/

// ** 3. �߻�ȭ
/*
	�������� �ǹ�? 
	�л��̶� �ҷ��µ� ���� �ҷ����� �𸥴�. 

	�п��̶�� �߻����� �����ȿ�
	�л����� ������ �� �ְ� �������� ������ �� �ְ� �������� ���� �����ְ� 
	�پ��� ���·� ���� �� �ִ�.

*/

// ** 4. ���
/*
	�� �״�� ����� ���Ѵ�.

	public : ������ ��� �ϴ� ��
	protecte : ���� ���� ��� �ϴ� ȭ���
	private : ���� ��� �ϴ� ��

*/

// ** 5. ������
/*
	���� �� �� �ִ� ���� ������ �л��ε� ���� ����ũ�� ���� �ְ�, �� ����ũ �ϼ����ְ�, �����۸�
	�Ű� ���� �� �� �ְ�  �ᱹ �л��̶�� ī�װ��� ���� ������
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
