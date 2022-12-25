// Двухмерный массив. Матрица.
//31. Дана квадратная матрица A порядка M. 
//Найти сумму элементов каждой ее диагонали, 
//параллельной главной (начиная с одноэлементной диагонали А1,M).

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //создание и заполнение массива
    int M = 0;
    cout << "Enter M:";
    cin >> M;
    int N = M;
    int vr = 0;
    int** arr = new int* [N];
    for (int i = 0; i < N; i++)
        arr[i] = new int[M];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Enter cel chislo:";
            cin >> arr[i][j];

        }
    }
    //вывод массива
    cout << endl; 
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
        {
            if (j % N == 0)
                cout << endl;
            cout << setw(3) << arr[i][j];
        }
    cout << endl;

    int i, j, sum;
    //суммы справа от диагонали
    for (i = 0; i < N; ++i) {
        sum = 0;
        for (j = i; j >= 0; --j) {
            sum += arr[i - j][N - 1 - j];
            cout << arr[i - j][N - 1 - j] << ' ';

        }
        cout << "  sum: " << sum << endl;

    }
    //суммы слева от диагонали
    for (j = 1; j < N; ++j) {
        sum = 0;
        for (i = j; i < N; ++i) {
            sum += arr[i][i - j];
            cout << arr[i][i - j] << ' ';
        }
        cout << "  sum: " << sum << endl;
    }
}
