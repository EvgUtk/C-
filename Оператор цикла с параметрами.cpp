/*Дано целое число N > 1. 
Последовательность вещественных чисел AK определяется следующим образом: A1 = 1, A2 = 2, AK = (AK−2 + 2∙AK−1)/3,

K = 3,4,.... 

*/
#include <iostream>
using namespace std;

int main()
{
	int N, i;
	double A1=1, A2=2, A3;
	cout << "Enter : ";
	cin >> N;
	cout << A1 << endl;
	cout << A2 << endl;
	for (i = 3; i <= N; i = i + 1) {
		A3 = (A1 + 2 * A2)/3;
		cout << A3 << endl;
		A1 = A2;
		A2 = A3;
	}

}

