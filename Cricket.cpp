#include "Cricket.h"
#include <algorithm>
#include <iostream>

void Cricket::registerObserver(Observer *obsr)
{
	if (!obsr)
		return;

	vect.push_back(obsr);
}

void Cricket::unregisterObserver(Observer* obsr)
{
	if (!obsr)
		return;
	
	std::vector<Observer*>::iterator itr;

	itr = std::remove(vect.begin(), vect.end(), obsr);

	vect.erase(itr, vect.end());
}

void Cricket::notifyObserver()
{	
	if (vect.empty())
		return;

	std::vector<Observer*>::iterator itr;

	for (itr = vect.begin(); itr < vect.end(); itr++)
		(*itr)->onUpdate();
}

void Cricket::updateScores()
{
	driver.onSetRuns(driver.onGetRuns() + 10);
	driver.onSetWickets(driver.onGetWickets() + 2);

	notifyObserver();
}