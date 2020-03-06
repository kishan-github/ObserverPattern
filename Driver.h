#pragma once

class Driver
{
	int runs;
	int wickets;

public:
	// Constructor
	Driver();

	// Setters
	void onSetRuns(int runs);
	void onSetWickets(int wicket);

	// Getters
	int onGetRuns();
	int onGetWickets();
};