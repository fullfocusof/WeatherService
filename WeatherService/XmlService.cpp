#include "XmlService.h"

Weather XmlService::getWeather(string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());

    if (!result) throw exception("error");

    xml_node node = doc.child("current");

    string city = node.child("city").
        attribute("name").
        as_string();

    double lon = node.child("city").child("coord").
        attribute("lon").
        as_int();

    double	lat = node.child("city").child("coord").
        attribute("lat").
        as_int();

    double temperature = node.child("temperature").
        attribute("value").
        as_double();

    string weather = node.child("weather").
        attribute("value").
        as_string();

    double windSpeed = node.child("wind")
        .child("speed").
        attribute("value").
        as_double(); 

    int clouds = node.child("clouds").
        attribute("value").
        as_int(); 


    return Weather(temperature, weather, windSpeed, clouds, city, lon, lat);
}