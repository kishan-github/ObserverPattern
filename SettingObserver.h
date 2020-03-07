#pragma once

#include "ObserverData.h"
#include <vector>

// Setting Observer class.
class SettingObserver
{
private:
	static std::vector<ObserverData*> *vect;	// Stores the list of observers.
public:
	SettingObserver(ObserverData* observerData);
	void registerObserver(ObserverData* obsr);
	void unregisterObserver(ObserverData* obsr);
	static void notifyObserver(int *setting);
};

