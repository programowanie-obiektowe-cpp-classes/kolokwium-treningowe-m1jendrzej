#include "zad1.hpp"
#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
public:
    Penne() = default;
    double ileMaki(unsigned P) const override { return (double)P; };

};
// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(const std::string& str) //wa¿ne: bez static przed definicj¹
{
    if (str.front() == str.back())
    {
        return new Tagliatelle(3.14, 0.42, 0.1); // dynamicznie alokuje pod zwracanym adresem obiekt
                                                 // typu Tagliatelle z polami o wartoœciach
    }
    else
    {
        return new Penne();
    };
};