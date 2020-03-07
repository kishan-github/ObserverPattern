#pragma once

#include "Observer.h"

// Score Display class.
class ScoreDisplay : public Observer
{
public:
	ScoreDisplay();
	static void onUpdateWickets();
};