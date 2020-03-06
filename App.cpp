// App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cricket.h"
#include "AverageDisplay.h"
#include "ScoreDisplay.h"

int main()
{
	Cricket cricket;
	AverageDisplay avgDisp;
	ScoreDisplay scoreDisp;

	cricket.registerObserver(&avgDisp);
	cricket.registerObserver(&scoreDisp);

	cricket.updateScores();
	cricket.updateScores();
	cricket.updateScores();

	cricket.unregisterObserver(&scoreDisp);

	cricket.updateScores();
	cricket.updateScores();
}