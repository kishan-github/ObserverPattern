#pragma once
#include "Observer.h"

class AverageDisplay : public Observer
{
public:
	void onUpdate() override;
};