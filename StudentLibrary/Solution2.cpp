#include "Solution2.h"

#include <iostream>
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
            throw std::runtime_error("Error: Invalid file format");
        }
    }

    return balance;
}

float Solution2::GetTotalBalance(const std::vector<std::string>& accountNames)
{
    float totalBalance = 0.0f;

    for (const auto& accountName : accountNames)
    {
        try
        {
            float balance = GetBalance(accountName);
            std::cout << "Balance for " << accountName << ": " << balance << std::endl;
            totalBalance += balance;
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error reading " << accountName << ": " << e.what() << std::endl;
        }
    }

    return totalBalance;
}

#endif
