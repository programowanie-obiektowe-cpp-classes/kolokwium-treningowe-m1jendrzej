#include "catch.hpp"
// Zad 2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
public:
    virtual ~Makaron() = default; // <-- TO DODAĆ
    virtual double ileMaki(unsigned P) const = 0;
    static Makaron* gotujMakaron(const std::string& str); // stala referencja!!!!!!!!!!!!!!!!
};

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{
public:
    Tagliatelle(double Length, double Width, double Radius) : L{Length}, W{Width}, R{Radius} {};
    Tagliatelle()
    {
        L = 0.5;
        W = 0.5;
        R = 0.5;
    };
    double ileMaki(unsigned P) const override { return P * L * W * (1. - R) * C; };

private:
    double L;
    double W;
    double R;
    static const double C;
};