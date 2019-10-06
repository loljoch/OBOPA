// ConsumerProducer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <queue>
#include <thread>
#include <iostream>
#include <mutex>
#include <condition_variable>

int counter = 0;
bool done = false;
std::queue<int> goods;

std::mutex mutex;
std::condition_variable flag;

void producer() {
	for (int i = 0; i < 500; ++i) {
		goods.push(i);
		counter++;
	}

	flag.notify_one();
	done = true;
}

void consumer() {

	std::unique_lock<std::mutex> lock(mutex);
	while (!done) {
		flag.wait(lock);
		while (!goods.empty()) {
			goods.pop();
			counter--;
		}
	}
}

int main() {
	std::thread producerThread(producer);
	std::thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();

	std::cout << "Net: " << counter << " " << goods.size() << " " << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
