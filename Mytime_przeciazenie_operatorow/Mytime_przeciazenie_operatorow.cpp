#include <iostream>
#include "MyTime.h"
int main()
{
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    std::cout << "Czas planowania = ";
    planning.Show();
    std::cout << "Czas kodowania = ";
    coding.Show();
    std::cout << "Czas poprawiania = ";
    fixing.Show();
    total = fixing + coding;
    std::cout << "Lacznie =";
    total.Show();
    total = total - coding;
    std::cout << "Czas  poprawiania = ";
    total.Show();
    total = total * 5;
    std::cout << "Pomnozony czas = ";
    std::cout << total;
    return 0;

}
