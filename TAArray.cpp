#include "TAArray.h"

template<class T>
TAArray<T>::TAArray(string name, TAConst size)
{
	this->name = name;
	arr = new T[size.getValue()];
}

template<class T>
TAArray<T>::~TAArray()
{
}

template<class T>
T & TAArray<T>::operator[](int i)
{
	return arr[i];
}
