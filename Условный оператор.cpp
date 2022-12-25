#include <iostream>

int main()
{
    int a;
    int a1;
    std::cout << "Enter number:";
    std::cin >> a;
    if (a % 2 == 0)
        a1 = a + 1;//четное
    else
        a1 = a;//не четное
    std::cout << "Poluchenoe chislo:" << a1;

}