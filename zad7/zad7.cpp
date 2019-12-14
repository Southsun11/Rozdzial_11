#include <iostream>
#include "Complex1.h"
int main()
{
    Complex1 a(3.0, 4.0);
    Complex1 c;
    std::cout << "Podaj liczbe zespolona, k aby przerwac" << std::endl;
    while (std::cin >> c)
    {
        std::cout << "c to " << c << "\n";
        std::cout << "Sprzezona to " << ~c << '\n';
        std::cout << "a + c wynosi " << a + c << '\n';
        std::cout << "a - c wynosi " << a - c << '\n';
        std::cout << "a * c wynosi " << a * c << '\n';
        std::cout << "2 * a wynosi " << 2 * a << '\n';
        std::cout << "Podaj liczbe zespolonaa, k aby przerwac" << std::endl;

    }
    std::cout << "Gotowe " << std::endl;
    return 0;
}

