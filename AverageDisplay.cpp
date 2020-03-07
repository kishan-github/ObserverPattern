#include <iostream>
#include "AverageDisplay.h"

// Constructor.
AverageDisplay::AverageDisplay()
{
	// Create a setting observer for wickets.
	new SettingObserver(new ObserverData(this, &((Cricket::driver)->Wickets)));
}

// This method will be called when setting provided for setting observer is updated.
void AverageDisplay::onUpdate()
{
	std::cout << "Average class notified.\n";
}