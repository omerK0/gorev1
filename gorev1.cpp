#include <iostream>

int main()
{
    float t;
    float g = 9.80665;
    std::cin >> t;
    float x = 0.5 * g * t * t;
    std::cout << x;
}