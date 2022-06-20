// ** Framework v0.1

#include <iostream>

using namespace std;

// ** 1. 정보은닉
/*

	public, private, protecte 어쩌구 ...
*/

// ** 2. 갭슐화
/*
	함수와 데이터가 따로 되있는 형태 
	내 기능은 나만 쓸 수 있다.

	내 숨쉬기 기능은 나만 쓸 수 있다.
	각각의 함수가 따로 있어야 한다.
*/

// ** 3. 추상화
/*
	포괄적인 의미? 
	학생이라 불렀는데 누굴 불렀는지 모른다. 

	학원이라는 추상적인 공간안에
	학생으로 존재할 수 있고 직원으로 존재할 수 있고 선생으로 있을 수도있고 
	다양한 형태로 있을 수 있다.

*/

// ** 4. 상속
/*
	말 그대로 상속을 말한다.

	public : 누구나 사용 하는 것
	protecte : 가족 끼리 사용 하는 화장실
	private : 나만 사용 하는 것

*/

// ** 5. 다형성
/*
	누가 될 수 있는 지는 모르지만 학생인데 검은 마스크일 수도 있고, 흰 마스크 일수도있고, 슬리퍼를
	신고 있을 수 도 있고  결국 학생이라는 카테고리에 들어가는 다형성
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
