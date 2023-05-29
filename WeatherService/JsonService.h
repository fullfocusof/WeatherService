#pragma once
#include "Service.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class JsonService : public Service
{
public:
	virtual Weather getWeather(string s) override;
	virtual ~JsonService() {};
};