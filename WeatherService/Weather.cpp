#include "Weather.h"

Weather::Weather(double temperature, string weather, double windSpeed, int clouds, string city, double lon, double lat)
{
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
	this->city = city;
	this->lon = lon;
	this->lat = lat;
}

void Weather::printWeather()
{
	cout << "Состояние погоды в городе " << this->city << " с координатами(долгота - " << this->lon << ", широта - " << this->lat << "): " << endl
		<< "Температура - " << this->temperature << endl
		<< "Осадки - " << this->weather << endl
		<< "Скорость ветра - " << this->windSpeed << endl
		<< "Облачность (в %) - " << this->clouds << endl << endl;
}