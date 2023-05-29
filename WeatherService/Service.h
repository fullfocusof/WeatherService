#pragma once
#include "Weather.h"

class Service
{
	virtual Weather getWeather(string s) = 0;
	virtual ~Service() {};
};