#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Vector.h"
#include <fstream>
int main()
{

    std::ofstream wyniki;
    char plik[20];
    std::cout << "Podaj nazwe pliku w ktorym zostana zapisane wyniki\n";
    std::cin >> plik;
    wyniki.open(plik);
    if (!wyniki.is_open())
    {
        std::cout << "Nie udalo sie otworzyc pliku, zamykam program\n";
            exit(EXIT_FAILURE);
    }
    srand(time(0));
    double direction;
    VECTOR::Vector step;
    VECTOR::Vector result(0, 0);
    unsigned long steps = 0;
    double target;
    double dstep;
    std::cout << "Podaj dystans do przejscia, k aby zakonczyc" << std::endl;
    while (std::cin >> target)
    {
        std::cout << "podaj dlugosc kroku: ";
            if (!(std::cin >> dstep))
                break;
            wyniki << "Dystans do przejscia: " << target << ", dlugosc kroku: " << dstep << std::endl;
            while (result.magval() < target)
            {
                wyniki << steps << ": " << result;
                direction = rand() % 360;
                step.reset(dstep, direction, VECTOR::Vector::POL);
                result = result + step;
                steps++;
            }
            wyniki << "Po " << steps << " krokach delikwent osiagnal polozenie\n " << result;
            result.polar_mode();
            wyniki << "Czyli " << result;
            wyniki << "Srednia dlugosc kroku " << result.magval() / steps << std::endl;
            steps = 0;
            result.reset(0.0, VECTOR::Vector::POL);
            std::cout << "Podaj dystans do przejscia, k aby zakonczyc" << std::endl;
        
    }
    wyniki.close();
    std::cout << "Koniec" << std::endl;
    std::cin.clear();
    while (std::cin.get() != '\n')
        continue;
        
}

