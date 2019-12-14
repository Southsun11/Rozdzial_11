#include <iostream>
#include <fstream>
#include "Stonewt.h"

void display(const Stonewt& w, int n);
int main()
{







     Stonewt incognito = 427;
    Stonewt wolfe(287.7);
    Stonewt taft(21, 8);
    std::cout << "Celebryta wazyl ";
    incognito.show_stn();
    std::cout << "Detektyw wazyl";
    wolfe.show_stn();
    std::cout << "Prezydent wazyl";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    std::cout << "Po obiedzie celebryta wazy ";
    incognito.show_stn();
    std::cout << "Po obiedzie prezydent wazy ";
    taft.show_lbs();
    display(taft, 2);
    int a = 30;
    std::cout << "a zapasnik wazy jeszcze wiecej ";
    display(a, 2);

    std::cout << "\nkonwersja na double " << double(incognito) << "\nkonwersja na int " << int(incognito) << std::endl;

    return 0;

}

void display( const Stonewt & w, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Oho! ";
        w.show_stn();
    }
}