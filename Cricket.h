#pragma once

#include "NotifyClass.h"
#include <vector>
#include "Driver.h"

class Cricket : public NotifyClass
{
private:
	std::vector<Observer *> vect;
	Driver driver;

public:
	void updateScores();
	void registerObserver(Observer *obsr) override;
	void unregisterObserver(Observer* obsr) override;
	void notifyObserver() override;
};