#pragma once
#include "TA.h"
#include "TAConst.h"

template<class T>
class TAArray :
	public TA
{
private:
	T* arr;
	int size;

public:
	TAArray(string name, TAConst size);
	~TAArray();

	T& operator[](int i);
};

