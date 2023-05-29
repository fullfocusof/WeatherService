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
	cout << "��������� ������ � ������ " << this->city << " � ������������(������� - " << this->lon << ", ������ - " << this->lat << "): " << endl
		<< "����������� - " << this->temperature << endl
		<< "������ - " << this->weather << endl
		<< "�������� ����� - " << this->windSpeed << endl
		<< "���������� (� %) - " << this->clouds << endl << endl;
}