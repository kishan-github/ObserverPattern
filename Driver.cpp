#include "Driver.h"
#include "SettingObserver.h"
#include <iostream>

// Setter for runs setting.
void Driver::onSetRuns(int runs)
{
	// Return if there is no update in value.
	if (Runs == runs)
		return;

	Runs = runs;

	// Notify all the setting observers that value is updates.
	SettingObserver::notifyObserver(&Runs);
}

// Getter for runs setting.
int Driver::onGetRuns()
{
	return Runs;
}

// Setter for wickets setting.
void Driver::onSetWickets(int wickets)
{
	// Return if there is no update in value.
	if (Wickets == wickets)
		return;

	Wickets = wickets;

	// Notify all the setting observers that value is updates.
	SettingObserver::notifyObserver(&Wickets);
}

int Driver::onGetWickets()
{
	return Wickets;
}