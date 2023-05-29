#include "XmlService.h"

int main()
{
	setlocale(LC_ALL, "ru");

	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

	w.printWeather();
}