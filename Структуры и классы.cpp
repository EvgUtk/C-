#include <iostream>
#include <string>

using namespace std;

class Rational {
private:
    int a;
    int b;

    void reduce(Rational p) {
        int m, n;
        m = p.a;
        n = p.b;
        while (m > 0 && n > 0) {
            if (m > n)
                m %= n;
            else
                n %= m;
        }
        m += n;
        p.a /= m;
        p.b /= m;
    }

public:
    Rational() {
        a = 0;
        b = 0;
    }

    void init(long f, unsigned short s) {
        a = f;
        b = s;
    }

    void read() {
        cout << "Numerator: ";
        cin >> a;
        cout << "Denominator: ";
        cin >> b;
    }

    void display() {
        cout << "Fraction: " << a << "/" << b << endl;
    }

    string toString() {
        string s = "Fraction view: " + to_string(a) + "/" + to_string(b) + "\n";
        return s;
    }

    static void Add(Rational p, Rational o) {
        Rational i;

        i.a = p.a * o.b + p.b * o.a;
        i.b = p.b * o.b;
        i.reduce(i);
        i.display();
    }

    static void Sub(Rational p, Rational o) {
        Rational i;

        i.a = p.a * o.b - p.b * o.a;
        i.b = p.b * o.b;
        i.reduce(i);
        i.display();
    }

    static void Mul(Rational p, Rational o) {
        Rational i;

        i.a = p.a * o.a;
        i.b = p.b * o.b;
        i.reduce(i);
        i.display();
    }

    static void Div(Rational p, Rational o) {
        Rational i;

        i.a = p.a * o.b;
        i.b = p.b * o.a;
        i.reduce(i);
        i.display();
    }

    static void Equal(Rational p, Rational o) {
        if (p.a == o.a && p.b == o.b)
            cout << "Fractions equal." << endl;
        else
            cout << "Fractions non equal." << endl;
    }
};

int main() {
    Rational g, f, j;

    g.read();
    g.display();
    cout << g.toString() << endl;

    f.read();
    f.display();
    cout << f.toString() << endl;

    j.Add(g, f);
    j.Sub(g, f);
    j.Mul(g, f);
    j.Div(g, f);
    j.Equal(g, f);
}
