#include "Solution1.h"
#include <cmath>
#include <iostream>

#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    //case 3
    if (_from == _to)
    {
        return _value;
    }

    switch (_from)
    {

    // case 2
    case TemperatureUnits::CELSIUS:
        // Convert from Celsius
        switch (_to)
        {
        case TemperatureUnits::FAHRENHEIT:
            return (_value * 9.0f / 5.0f) + 32.0f;
        case TemperatureUnits::KELVIN:
            return _value + 273.0f;
        default:
            return -1.0f; // Unsupported conversion
        }

    }

        return -1.0f;
}

#endif
