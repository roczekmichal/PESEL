#include <iostream>
#include <array>


bool czy_poprawny(std::array<int, 11> pesel)
{
    int dodanie_cyfr = 1 * pesel[0] + 3 * pesel[1] + 7 * pesel[2] + 9 * pesel[3] + 1 * pesel[4] + 3 * pesel[5] + 7 * pesel[6] + 9 * pesel[7] + 1 * pesel[8] + 3 * pesel[9] + 1 * pesel[10];

    if (dodanie_cyfr % 10 == 0)
        return true;
    else
        return false;    
}


void plec(std::array<int, 11> pesel)
{
    if (pesel[9] % 2 == 1)
        std::cout << "Mezczyzna\n";
    else
        std::cout << "Kobieta\n";
    return;
}


void wyswietl_pesel(std::array<int, 11> pesel)
{
    std::cout << "Twoj pesel: \n";
    for (int i = 0; i < size(pesel); i++)
    {
        std::cout << pesel[i];
    }
    std::cout << std::endl;
    return;
}


void miesiac_nazwa(int wynik)
{
    if (wynik == 1)
        std::cout << "Styczen";
    else if (wynik == 2)
        std::cout << "Luty";
    else if (wynik == 3)
        std::cout << "Marzec";
    else if (wynik == 4)
        std::cout << "Kwiecien";
    else if (wynik == 5)
        std::cout << "Maj";
    else if (wynik == 6)
        std::cout << "Czerwiec";
    else if (wynik == 7)
        std::cout << "Lipiec";
    else if (wynik == 8)
        std::cout << "Sierpien";
    else if (wynik == 9)
        std::cout << "Wrzesien";
    else if (wynik == 10)
        std::cout << "Pazdziernik";
    else if (wynik == 11)
        std::cout << "Listopad";
    else if (wynik == 12)
        std::cout << "Grudzien";
    return;
}


void dzien(std::array<int, 11> pesel)
{
    std::cout << pesel[4] << pesel[5];
    return;
}

void data_urodzenia(std::array<int, 11> pesel)
{
    if (pesel[2] == 8 || pesel[2] == 9)
    {
        std::cout << "Rok urodzenia: " << 18 << pesel[0] << pesel[1] << std::endl;
        int pierwsza = pesel[2] * 10;
        int druga = pesel[3];
        int dodawanie = pierwsza + druga;
        int wynik = dodawanie - 80;
        std::cout << "Miesiac: ";
        miesiac_nazwa(wynik);
        std::cout << std::endl;
        std::cout << "Dzien: ";
        dzien(pesel);
    }
    else if (pesel[2] == 0 || pesel[2] == 1)
    {
        int wynik1 = 0;
        std::cout << "Rok urodzenia: " << 19 << pesel[0] << pesel[1] << std::endl;
        if (pesel[2] == 0)
            wynik1 = pesel[3];
        else
            wynik1 = pesel[2] * 10 + pesel[3];
        std::cout << "Miesiac: ";
        miesiac_nazwa(wynik1);
        std::cout << std::endl;
        std::cout << "Dzien: ";
        dzien(pesel);
        std::cout << std::endl;
        std::cout << "Plec: ";
        plec(pesel);
    }
    else if (pesel[2] == 2 || pesel[2] == 3)
    {
        
        std::cout << "Rok urodzenia: " << 20 << pesel[0] << pesel[1] << std::endl;
        int pierwsza2 = pesel[2] * 10;
        int druga2 = pesel[3];
        int dodawanie2 = pierwsza2 + druga2;
        int wynik2 = dodawanie2 - 20;
        std::cout << "Miesiac: ";
        miesiac_nazwa(wynik2);
        std::cout << std::endl;
        std::cout << "Dzien: ";
        dzien(pesel);
        std::cout << std::endl;
        std::cout << "Plec: ";
        plec(pesel);
    }
    else if (pesel[2] == 4 || pesel[2] == 5)
    {
        
        std::cout << "Rok urodzenia: " << 21 << pesel[0] << pesel[1] << std::endl;
        int pierwsza3 = pesel[2] * 10;
        int druga3 = pesel[3];
        int dodawanie3 = pierwsza3 + druga3;
        int wynik3 = dodawanie3 - 40;
        std::cout << "Miesiac: ";
        miesiac_nazwa(wynik3);
        std::cout << std::endl;
        std::cout << "Dzien: ";
        dzien(pesel);
        std::cout << std::endl;
        std::cout << "Plec: ";
        plec(pesel);
    }
    else if (pesel[2] == 6 || pesel[2] == 7)
    {
        
        std::cout << "Rok urodzenia: " << 22 << pesel[0] << pesel[1] << std::endl;
        int pierwsza4 = pesel[2] * 10;
        int druga4 = pesel[3];
        int dodawanie4 = pierwsza4 + druga4;
        int wynik4 = dodawanie4 - 60;
        std::cout << "Miesiac: ";
        miesiac_nazwa(wynik4);
        std::cout << std::endl;
        std::cout << "Dzien: ";
        dzien(pesel);
        std::cout << std::endl;
        std::cout << "Plec: ";
        plec(pesel);
    }
    else
        return;
}