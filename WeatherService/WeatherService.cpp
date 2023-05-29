#include "JsonService.h"

int main()
{
	setlocale(LC_ALL, "ru");

	JsonService js;
	Weather w = js.getWeather("weather.json");

	w.printWeather();
}