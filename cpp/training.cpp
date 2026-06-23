#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "Enter another number: ";
    int y{};
    std::cin >> y;
    std::cout << x << " + " << y << " = " << x + y << '\n';
    std::cout << x << " - " << y << " = " << x - y << '\n';

    return 0;
}