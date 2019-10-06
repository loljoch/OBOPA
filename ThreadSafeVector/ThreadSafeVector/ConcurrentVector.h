#pragma once
#include <vector>
#include <mutex>


template <typename T>

class ConcurrentVector
{

public:

	std::mutex mutex;

	ConcurrentVector(T);
	virtual ~ConcurrentVector();

	T* getItemAt(int);

	void addItem(T);
	void addItem(T, int);

	void removeItem(int);

	int size();


private:
	std::vector<T> list;
};

