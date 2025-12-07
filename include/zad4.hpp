#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector< Tagliatelle >& vec)
{
    double M = 0.0;
    for (int i = 0; i < vec.size(); i++)
    {
        unsigned porcje = vec.size() - i;
        M += vec[i].ileMaki(porcje);
    }
    if (M > 100.0)
    {
        throw (int)1; //wyjatek typu int
    }
    if ((M > 50.0) and (M <= 100.0))
    {
        throw (double)1.0; // wyjatek typu double
    }
    if ((M <= 50.0))
    {
        return M;
    };
}