#include "Solution1.h"
#include <cmath>
#include <iostream>

#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    // Test 3
    if (_from == _to)
    {
        return _value;
    }

    // Test 0 & 1
    if (_from == TemperatureUnits::KELVIN) {
        if (_to == TemperatureUnits::CELSIUS) {
            return std::round((_value - 273.0) * 100.0) / 100.0;
        }
        else if (_to == TemperatureUnits::FAHRENHEIT) {
            return std::round(((_value - 273.0) * 9.0 / 5.0 + 32.0) * 100.0) / 100.0;
        }
    }

    // Test 2
    else if (_from == TemperatureUnits::CELSIUS) {
        if (_to == TemperatureUnits::FAHRENHEIT) {
            return (_value * 9.0f / 5.0f) + 32.0f;
        }
        else if (_to == TemperatureUnits::KELVIN) {
            return _value + 273.0f;
        }
    }

    // Test 4
    else if (_from == TemperatureUnits::FAHRENHEIT) {
        if (_to == TemperatureUnits::CELSIUS) {
            return (_value - 32.0f) * 5.0f / 9.0f;
        }
        else if (_to == TemperatureUnits::KELVIN) {
            return (_value - 32.0f) * 5.0f / 9.0f + 273.0f;
        }
    }

    return -1.0f;
}

#endif
