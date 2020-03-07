#include "ObserverData.h"

// Constructor.
ObserverData::ObserverData(Observer* obsr, int* setting)
{
	// Initialize the member variables.
	this->obsr = obsr;
	this->setting = setting;
}