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
	
	
	
	return 0;

}






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

// ** 8. 깊은복사 & 얕은복사
// ** 9. 오버로딩 & 오버라이딩
// ** 10. 연산자 오버로딩
// ** 11. 포인터 (복습)

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

#pragma endregion


