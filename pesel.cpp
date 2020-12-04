#include <iostream>
#include <array>
#include "funkcje.h"


int main()
{
    int cyfra;
    std::array<int, 11> pesel;
    std::cout << "Prosze podac swoj pesel po jednej cyfrze: " << std::endl;
    for (int i = 0; i < size(pesel); i++)
    {
        std::cin >> cyfra;     
        pesel[i] = cyfra;
    }


    std::cout << "-----------------------------------------\n";

    wyswietl_pesel(pesel);

    std::cout << "-----------------------------------------\n";

    if (czy_poprawny(pesel)==true)
        std::cout << "Twoj pesel jest poprawny\n";
    else
        std::cout << "Twoj pesel nie jest poprawany!\n";

    data_urodzenia(pesel);
       

    return 0;
}

