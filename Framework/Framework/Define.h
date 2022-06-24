#pragma once

#define Message(str) (cout << str << endl)

template <typename T>

inline void Safe_Delete(T* _obj)
{
	if (_obj)
	{
		delete _obj;
		_obj = nullptr;
	}
}