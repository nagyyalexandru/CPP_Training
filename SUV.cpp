#include "SUV.h"
#include <iostream>

SUV::SUV() : Automobil("", "SUV", "", "", 0)
{
    std::cout << "SUV()" << std::endl;
}

SUV::SUV(const std::string &combustibil, const std::string &tractiune,
         const std::string &echipare, int putere) : Automobil(combustibil,
                                                              "SUV", tractiune, echipare, putere)
{
    std::cout << "SUV(const string, const string, const string, int)" << std::endl;
}

SUV::SUV(const SUV &obj) : Automobil(obj)
{
    std::cout << "SUV(const SUV &obj)" << std::endl;
}

SUV &SUV::operator=(const SUV &obj)
{
    std::cout << "SUV operator=  // (copy assignment operator)" << std::endl;
    if (this != &obj)
    {
        Automobil::operator=(obj); // call the copy-assignment operator of Base class
    }

    return *this;
}

SUV::~SUV()
{
    std::cout << "~SUV()" << std::endl;
}

void SUV::printDetails() const
{
    std::cout << "Tip: SUV (Sports Utility Vehicle)" << std::endl;
    Automobil::printDetails();
}