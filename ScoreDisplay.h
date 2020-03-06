#pragma once

#include "Observer.h"

class ScoreDisplay : public Observer
{
public:
	void onUpdate() override;
};