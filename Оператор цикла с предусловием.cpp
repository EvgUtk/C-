/*
Дано целое число N > 1.
Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + ... + K 
будет больше или равна N, и саму эту сумму.
*/

#include <iostream>

int main()
{
    int N, K, i;
    std::cout << "Enter N:";
    std::cin >> N;
    K = 0;
    i = 0;
    while (i < N) {
        K = K + 1;
        i = i + K;
    }
    std::cout << "sum=" << i <<std::endl;
    std::cout << "Chislo=" << K << std::endl;

}
