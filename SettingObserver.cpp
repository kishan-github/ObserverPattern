#include "SettingObserver.h"
#include <algorithm>
#include <iostream>

// Initialize the vect. It will store the list of setting observers registered.
std::vector<ObserverData*> *SettingObserver::vect = new std::vector<ObserverData*>;

// Constructor.
SettingObserver::SettingObserver(ObserverData *observerData)
{
	registerObserver(observerData);
}

// Register the observer.
void SettingObserver::registerObserver(ObserverData* obsr)
{
	if (!obsr)
		return;

	vect->push_back(obsr);
}

// De-Register the observer.
void SettingObserver::unregisterObserver(ObserverData* obsr)
{
	if (!obsr)
		return;

	std::vector<ObserverData*>::iterator itr;

	itr = std::remove(vect->begin(), vect->end(), obsr);

	vect->erase(itr, vect->end());
}

// Notify the observer about update in value.
void SettingObserver::notifyObserver(int *setting)
{
	if (vect->empty())
		return;

	std::vector<ObserverData*>::iterator itr;

	// Iterate through the vector.
	for (itr = vect->begin(); itr < vect->end(); itr++)
	{
		// Call the onUpdate method of all the registered observers for this setting.
		if((*itr)->setting == setting)
			(*itr)->onUpdate();
	}
}