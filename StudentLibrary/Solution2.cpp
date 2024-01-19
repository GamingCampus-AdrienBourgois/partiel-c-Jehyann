#include "Solution2.h"

#include <ostream>
#include <fstream>
#include <stdexcept>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    std::ifstream file(accountName);
    if (!file.is_open())
    {
        throw std::runtime_error("Error: File not found");
    }

    float balance = 0.0f;
    char operation;
    float amount;

    while (file >> operation >> amount)
    {
        if (operation == '+')
        {
            balance += amount;
        }
        else if (operation == '-')
        {
            balance -= amount;
        }
        else
        {
            throw std::runtime_error("Error: Invalid file format");
        }
    }

    return balance;
}

#endif
