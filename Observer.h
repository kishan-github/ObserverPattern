#pragma once
#include <cstddef>

// Observer class. It contains properties required for creating a setting observer.
class Observer
{
public:
	int* setting = NULL;	// The driver setting for which you want to create observer.
	void virtual onUpdate() = 0;
};