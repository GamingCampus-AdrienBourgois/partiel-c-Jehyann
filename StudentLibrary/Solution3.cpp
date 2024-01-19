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

    std::sort(words.begin(), words.end(), CaseInsensitiveCompare);
}

std::vector<std::string> Solution3::GetSortedWords() const
{
    return words;
}

bool Solution3::CaseInsensitiveCompare(const std::string& a, const std::string& b)
{
    // sensé sort même quand maj et pas maj mais jsp
    return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(),
        [](char c1, char c2) { return tolower(c1) < tolower(c2); });
}

#endif
