#include "Driver.h"

Driver::Driver()
{
	runs = 0;
	wickets = 0;
}

void Driver::onSetRuns(int runs)
{
	this->runs = runs;
}

int Driver::onGetRuns()
{
	return this->runs;
}

void Driver::onSetWickets(int wickets)
{
	this->wickets = wickets;
}

int Driver::onGetWickets()
{
	return this->wickets;
}