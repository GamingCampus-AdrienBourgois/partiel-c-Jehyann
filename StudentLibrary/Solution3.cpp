#include "Solution3.h"

#include <algorithm>
#include <stdexcept>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords()
{
    // Test 2
    if (words.empty())
    {
        
        throw std::runtime_error("Error: Vector is null or empty");
    }

    // Test 0
    if (words.size() == 1 && words[0].size() == 1)
    {
        return;
    }

    // Utiliser std::sort avec la fonction de comparaison personnalisée
    std::sort(words.begin(), words.end());
}

std::vector<std::string> Solution3::GetSortedWords() const
{
    return words;
}

bool Solution3::CaseInsensitiveCompare(const std::string& a, const std::string& b)
{
    // Test 4
    return std::lexicographical_compare(
        a.begin(), a.end(),
        b.begin(), b.end(),
        [](char a, char b) {
            return std::tolower(static_cast<unsigned char>(a)) < std::tolower(static_cast<unsigned char>(b));
        }
    );
}

#endif
