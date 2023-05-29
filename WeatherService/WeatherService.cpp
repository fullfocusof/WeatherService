#include "JsonService.h"
#include "XmlService.h"


int main()
{
	setlocale(LC_ALL, "ru");

	JsonService js;
	Weather w = js.getWeather("weather.json");

	w.printWeather();

	XmlService xs;
	Weather w2 = xs.getWeather("weather.xml");

	w2.printWeather();
}