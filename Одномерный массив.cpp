// Дан массив A размера N.
//  Сформировать новый массив B того же размера по следующему правилу:
//  элемент Bк равен сумме элементов массива A с номерами от 1 до к.
//

#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int k = 0;
    cout << "Enter n:";
    cin >> n;
    cout << endl;
    int j = n;

    int* a = new int[n] {};
    int* b = new int[j] {};
    for (int i = 0; i < n; i++) {
        int vr;
        cin >> vr;
        a[i] = { vr };
    }
    b[0] = a[0];
    b[1] = a[1];
    for (int i = 2; i < n; i++) {
        int c = 0;
        for (int j = 1; j < i+1; j++) {
            c += a[j];
        }
        b[i] = c;
    }

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cout << a[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "b[" << i << "]=";
        cout << b[i] << endl;
    }
}

