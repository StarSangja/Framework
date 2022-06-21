#pragma once

#include "Headers.h"


class Parent
{
private:
	// ** 자기 자신만 사용 사능

protected:
	// ** 상속간의 공개된 상태, 비상속 클래스 사용불가, 외부 사용 불가
	int m_Number;

public:
	// ** 공개된 상태
	//void Initialize();
	virtual void Initialize() = 0;
	// virtual 은 부모가 자식대신 해준다?

	virtual void Update();

	//void Output(); // 함수 있다고 말하고
	virtual void Output() = 0;

	// ** [Virtual]
	/*
		virtual = 가상함수
		[ = 0 ] : vitual 함수에만 붙일 수 있다.
		함수의 끝에 [ = 0 ] 을 붙이게 되면 [순수 가상 함수]가 된다.

	*/

	// ** [순수 가상 함수]
	/*
		vitual 함수가 함수의 몸체(정의)가 없을때 사용한다.
	*/

	// ** virtual 함수를 시용하는 이유?
	/*
		순수 가상함수 사용하는 이유 검색 ㄱㄱ
	*/
};

