#include<iostream>
int main()
{
	int year;
	int cen;
	std::cout << "Enter year:";//введите год
	std::cin >> year;
	cen = ((year - 1) / 100) + 1;//вычисление
	std::cout << "Century:" << cen;//вывод результата
	return 0;

}
