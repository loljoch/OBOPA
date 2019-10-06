#pragma once
#include <vector>
#include <mutex>
#include <algorithm>

template <typename T>

class SafeVector
{
public:
	SafeVector();
	virtual ~SafeVector();

	T get(int);

	void add(T);
	void remove(int);

	void testThreading();

	int size();


private:
	std::mutex mutex;
	std::vector<T> list;
	int listSize;
};

template<typename T>
inline SafeVector<T>::SafeVector()
{
}

template<typename T>
inline SafeVector<T>::~SafeVector()
{
}

template<typename T>
inline T SafeVector<T>::get(int _location)
{
	return list[_location];
}

template<typename T>
inline void SafeVector<T>::add(T _item)
{
	{
		std::lock_guard<std::mutex> guard(mutex);
		listSize++;
		list.push_back(_item);
	}
}

template<typename T>
inline void SafeVector<T>::remove(int _position)
{
	{
		std::lock_guard<std::mutex> guard(mutex);
		listSize--;
		list.erase(_position);
	}
}

//This function only deletes duplicates if all the same numbers are next to eachother
template<typename T>
inline void SafeVector<T>::testThreading()
{
	auto it = std::unique(list.begin(), list.end());

	list.resize(std::distance(list.begin(), it));

	listSize = list.size();
}

template<typename T>
inline int SafeVector<T>::size()
{
	return listSize;
}
