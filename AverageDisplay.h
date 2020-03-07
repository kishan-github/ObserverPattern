#pragma once
#include "Observer.h"
#include "ObserverData.h"
#include "SettingObserver.h"
#include "Driver.h"
#include "Cricket.h"

// Average display class.
class AverageDisplay : public Observer
{
public:
	AverageDisplay();
	static void onUpdateRuns(void);
};