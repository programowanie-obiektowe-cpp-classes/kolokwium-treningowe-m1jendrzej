#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template <typename It> 
void sortujTagliatelle(It first, It last)
{
    std::sort(first, last, [](const Tagliatelle& a, const Tagliatelle& b) {
        // sortujemy malej¹co po iloœci m¹ki dla 1 porcji
        return a.ileMaki(1) > b.ileMaki(1);
    });
}