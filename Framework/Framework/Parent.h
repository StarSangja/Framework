#pragma once

#include "Headers.h"


class Parent
{
private:
	// ** �ڱ� �ڽŸ� ��� ���

protected:
	// ** ��Ӱ��� ������ ����, ���� Ŭ���� ���Ұ�, �ܺ� ��� �Ұ�
	int m_Number;

public:
	// ** ������ ����
	//void Initialize();
	virtual void Initialize() = 0;
	// virtual �� �θ� �ڽĴ�� ���ش�?

	virtual void Update();

	//void Output(); // �Լ� �ִٰ� ���ϰ�
	virtual void Output() = 0;

	// ** [Virtual]
	/*
		virtual = �����Լ�
		[ = 0 ] : vitual �Լ����� ���� �� �ִ�.
		�Լ��� ���� [ = 0 ] �� ���̰� �Ǹ� [���� ���� �Լ�]�� �ȴ�.

	*/

	// ** [���� ���� �Լ�]
	/*
		vitual �Լ��� �Լ��� ��ü(����)�� ������ ����Ѵ�.
	*/

	// ** virtual �Լ��� �ÿ��ϴ� ����?
	/*
		���� �����Լ� ����ϴ� ���� �˻� ����
	*/
};

