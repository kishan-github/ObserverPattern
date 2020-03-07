#include "Cricket.h"

// Initialize the driver variable to access the settings.
Driver* Cricket::driver = new Driver();

// Update runs.
void Cricket::updateRuns()
{
	driver->onSetRuns(driver->onGetRuns() + 10);
}

// Update wickets.
void Cricket::updateWickets()
{
	driver->onSetWickets(driver->onGetWickets() + 2);
}