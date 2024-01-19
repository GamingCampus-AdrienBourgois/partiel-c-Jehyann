#include "Solution1.h"
#include <cmath>
#include <iostream>

#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to, float _result)
{

    //case 1 et 2
    if (_from == TemperatureUnits::KELVIN){

        if (_to == TemperatureUnits::CELSIUS) {

            _result = _value - 273.0f;
            std::cout << "Voici ton résultat :" << _result;

            return _result;
        }

        else if (_to == TemperatureUnits::FAHRENHEIT) {
            _result = (_value - 273.0f) * 9.0f / 5.0f + 32.0f;

            return _result;
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
