#pragma once
#include <queue>

template <typename T>
class FakeQueue
{
public:
	FakeQueue();
	virtual ~FakeQueue();

	void put(T);
	T get();

	int size();

private:
	int queueSize = 0;
	std::queue<T> queue;
};



//Visual studio recommended the inline to me
template<typename T>
inline FakeQueue<T>::FakeQueue()
{
}

template<typename T>
inline FakeQueue<T>::~FakeQueue()
{
}

template<typename T>
inline void FakeQueue<T>::put(T _item)
{
	queue.push(_item);
	queueSize++;
}

template<typename T>
inline T FakeQueue<T>::get()
{
	if (!queue.empty()) {
		queueSize--;
		T tempVar = queue.front();
		queue.pop();
		return tempVar;
	}
	else {
		return 0;
	}
}

template<typename T>
inline int FakeQueue<T>::size()
{
	return queueSize;
}
