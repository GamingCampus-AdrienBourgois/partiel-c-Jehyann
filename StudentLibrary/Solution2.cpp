#include "Solution2.h"

#include <iostream>
#include <fstream>
#include <stdexcept>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    // dsl pas le temps de faire un truc pr bien lire les fichiers ):
    std::ifstream file(accountName);
    if (!file.is_open())
    {
        throw std::runtime_error("Error: File not found");
    }

    float balance = 0.0f;
    std::string operation;
    float amount;

    while (file >> operation >> amount)
    {
        if (operation == "DEPOSIT")
        {
            // Dépôt
            balance += amount;
        }
        else if (operation == "WITHDRAW")
        {
            // Retrait
            balance -= amount;
        }
        else
        {
            // Test 3
            throw std::runtime_error("Error: Invalid file format");
        }
    }

    return balance;
}

#endif
