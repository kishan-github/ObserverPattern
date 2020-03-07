#pragma once

// This class stores all the settings.
class Driver
{
public:
	int Runs;
	int Wickets;

	// Setters
	void onSetRuns(int runs);
	void onSetWickets(int wicket);

	// Getters
	int onGetRuns();
	int onGetWickets();
};