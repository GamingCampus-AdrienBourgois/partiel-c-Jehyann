#include "Solution1.h"
#include <cmath>

#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{

    //case 1 et 2
    if (_from == TemperatureUnits::KELVIN){

        if (_to == TemperatureUnits::CELSIUS) {
            return _value - 273.0f;
        }

        else if (_to == TemperatureUnits::FAHRENHEIT) {
            return (_value - 273.0f) * 9.0f / 5.0f + 32.0f;
        }

    }

    //case 3
    if (_from == _to)
    {
        return _value;
    }




	//return -1.0f;
}

#endif
