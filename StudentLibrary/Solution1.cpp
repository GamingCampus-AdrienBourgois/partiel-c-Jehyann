#include "Solution1.h"
#include <cmath>
#include <iostream>

#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    // Test 3 - Réussi
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
            return std::round((_value * 9.0 / 5.0 + 32.0) * 100.0) / 100.0;
        }
        else if (_to == TemperatureUnits::KELVIN) {
            return std::round((_value + 273.0) * 100.0) / 100.0;
        }
    }

    // Test 4 - Réussi
    else if (_from == TemperatureUnits::FAHRENHEIT) {
        if (_to == TemperatureUnits::CELSIUS) {
            return std::round(((_value - 32.0) * 5.0 / 9.0) * 100.0) / 100.0;
        }
        else if (_to == TemperatureUnits::KELVIN) {
            return std::round(((_value - 32.0) * 5.0 / 9.0 + 273.0) * 100.0) / 100.0;
        }
    }

    return -1.0f;
}

#endif
