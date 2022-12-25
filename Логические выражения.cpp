#include <iostream>

int main()
{
    int a, b, c;
    bool nani;
    std::cout << "Enter storona a, storona b and storona c:";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    nani = (a == b || a == c || b == c);
    std::cout << "Treugolnik ravnobedriniy:" << nani;
}