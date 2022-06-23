#pragma once
#include "Headers.h"

class SceneManager
{
private:
	static SceneManager* Instance;

public:
	static SceneManager* GetInstance()
	{
		if (GetInstance == nullptr)
			Instance = new SceneManager;

		return Instance;
	}
private:
	
public:
	void SetScene(SCENEID _SceneState);

private:
	SceneManager() {};
public:
	~SceneManager() {};

};

