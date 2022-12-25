#include <iostream>

int main() {
	int n;
	float x,a,c,h;

	std::cout << "Enter nomer: ";
	std::cin >> n;
	std::cout << "Enter znachenie: ";
	std::cin >> x;

	switch (n) 
	{
		default:
			std::cout << "New";
			break;
		case 1:
			std::cout << "gipotenuza = " << x * sqrt(2) << ", visota =" << (x * sqrt(2)) / 2 << ", ploshad = " << ((x * sqrt(2)) * ((x * sqrt(2)) / 2)) / 2;
			break;
		case 2:
			std::cout << "katet = " << x / sqrt(2) << ", visota =" << x / 2 << ", ploshad = " << (x * (x / 2)) / 2;
			break;
		case 3:
			std::cout << "katet = " << (2 * x) / sqrt(2) << ", gipotenuza =" << 2 * x << ", ploshad = " << ((2 * x) * x) / 2;
			break;
		case 4:
		{
			a = sqrt(2 * x);
			c = a * sqrt(2);
			h = c / 2;
			std::cout << "katet = " << a << ", gipotenuza =" << c << ", visota = " << h;
		}
		break;
	}
}