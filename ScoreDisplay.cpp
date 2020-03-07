#include <iostream>
#include "ScoreDisplay.h"
#include "SettingObserver.h"
#include "ObserverData.h"
#include "Driver.h"
#include "Cricket.h"

// Constructor.
ScoreDisplay::ScoreDisplay()
{
	// Create the object of setting observer to register this class as observer.
	new SettingObserver(new ObserverData(this, &((Cricket::driver)->Runs), onUpdateWickets));
}

// This method will be called when there is any update in value.
void ScoreDisplay::onUpdateWickets()
{
	std::cout << "Score class notified.\n";
}