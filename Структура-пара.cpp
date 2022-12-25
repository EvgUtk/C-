#include <iostream>
#include <string> 

using namespace std;

class Time {
public:

    int f;
    int s;
    int first;
    int second;
    int min;

    void read() {
        cin >> f >> s;
    }

    void display() {
        cout << "Time in min: " << min << endl;
    }

    void minutes() {
        min = (first * 60) + second;
    }

};



int main()
{
    Time a;
    cout << "Enter Hours and min:";
    a.read();
    a.first = a.f;
    a.second = a.s;

    if ((a.first < 0) || (a.second < 0)) {
        cout << "Enter not <0:";
    }

    else {
        a.minutes();
        a.display();
    }

}