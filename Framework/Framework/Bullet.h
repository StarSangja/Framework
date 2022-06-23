#pragma once
#include "Parent.h"

class Bullet:public Parent
{
public:
	virtual void Initialize();

	virtual void Update();

	virtual void Output();
};

