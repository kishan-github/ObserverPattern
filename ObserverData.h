#pragma once

#include "Observer.h"

// Observer Data class.
class ObserverData
{
public:
	Observer* obsr;
	int* setting;
	void (*onUpdate)();

	ObserverData(Observer* obsr, int* setting, void (*updateFunction)(void));
};