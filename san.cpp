#include <iostream>
#include <iomanip>

int main()
{
    double d = 122.345;
    std::cout << std::fixed << std::setprecision(0) << d;
}