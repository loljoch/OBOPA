#include "pch.h"
#include <iostream>
#include "Parent.h"

Parent::Parent(std::string name) {
	this->name = name;
	std::string childName = "ChildOf" + name;

	uniqueChild = std::make_unique<Child>(childName);
}

Parent::Parent(const Parent& other) {
	std::cout << "Parent cctor" << std::endl;
	this->name = other.name;
	uniqueChild = std::make_unique<Child>(*other.uniqueChild.get());
}

Parent::~Parent() {
	std::cout << "Parent dtor : " << this->name << std::endl;
}

Parent& Parent::operator=(const Parent& other) {
	std::cout << "Parent assignment" << std::endl;

	if (this == &other) return *this;

	this->name = other.name;
	uniqueChild = std::make_unique<Child>(*other.uniqueChild.get());
	
	return *this;
}

void Parent::removeChild()
{
	uniqueChild.reset();
}

int Parent::childCount()
{
	return (uniqueChild != nullptr);
}

std::ostream& operator<<(std::ostream& os, const Parent& parent) {
	os << "parent name: " << parent.name << "," << *parent.uniqueChild;
	return os;
}