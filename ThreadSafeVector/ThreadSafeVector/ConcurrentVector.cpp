#include "pch.h"
#include "ConcurrentVector.h"

template<typename T>
ConcurrentVector<T>::ConcurrentVector()
{
	list = std::vector<T>;
}

template<typename T>
ConcurrentVector<T>::~ConcurrentVector()
{
}

template<typename T>
T * ConcurrentVector<T>::getItemAt(int _location)
{
	return list[_location];
}

template<typename T>
void ConcurrentVector<T>::addItem(T _item)
{
	{
		std::lock_guard<std::mutex> guard(mutex);
		list.push_back(_item);
	}
}

template<typename T>
void ConcurrentVector<T>::addItemAt(T _item, int _location)
{
	{
		std::lock_guard<std::mutex> guard(mutex);
		list.push_back(_item, _location);
	}
}

template<typename T>
void ConcurrentVector<T>::removeItem(int _location)
{
	{
		std::lock_guard<std::mutex> guard(mutex);
		list.erase(list.begin() + _location);
	}
}

template<typename T>
int ConcurrentVector<T>::size()
{
	return list.size;
}

