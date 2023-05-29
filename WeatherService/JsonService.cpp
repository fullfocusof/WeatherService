#include "JsonService.h"

Weather JsonService::getWeather(string s)
{
    ifstream fin(s);

    if (!fin) throw exception("error");

    json j;
    j = json::parse(fin);

    string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];   
    double temperature = j["main"]["temp"]; 
    string weather = j["weather"][0]["main"]; 
    double windSpeed = j["wind"]["speed"]; 
    int clouds = j["clouds"]["all"]; 

    return Weather(temperature, weather, windSpeed, clouds, city, lon, lat);
}