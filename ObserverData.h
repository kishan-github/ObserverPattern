#pragma once

#include "Observer.h"

// Observer Data class.
class ObserverData
{
public:
	Observer* obsr;
	int* setting;

	ObserverData(Observer* obsr, int* setting);
};