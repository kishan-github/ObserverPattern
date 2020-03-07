#include "ObserverData.h"

// Constructor.
ObserverData::ObserverData(Observer* obsr, int* setting, void (*updateFunction)(void))
{
	// Initialize the member variables.
	this->obsr = obsr;
	this->setting = setting;
	this->onUpdate = updateFunction;
}