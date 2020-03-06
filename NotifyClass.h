#pragma once

#include "Observer.h"

class NotifyClass
{
public:
	void virtual registerObserver(Observer *obsr) = 0;
	void virtual unregisterObserver(Observer *obsr) = 0;
	void virtual notifyObserver() = 0;
};