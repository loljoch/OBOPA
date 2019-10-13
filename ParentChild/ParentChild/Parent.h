#pragma once

#include <string>
#include <ostream>
#include "Child.h"

class Parent {
public:
	Parent(std::string name);
	Parent(const Parent& other);
	virtual ~Parent();
	Parent& operator=(const Parent& other);

	void removeChild();
	int childCount();

	friend std::ostream& operator<<(std::ostream& os, const Parent& parent);

	Parent(Parent&& other) noexcept;

private:
	std::string name;

	std::unique_ptr<Child> uniqueChild;
};
