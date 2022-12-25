#include <iostream>

class Money
{
protected:
    long rubles;
    unsigned char kopecks;

public:
    Money(long rubles = 0, unsigned char kopecks = 0) : rubles(rubles), kopecks(kopecks) {}

    virtual void print() const
    {
        std::cout << rubles << " rubles " << (int)kopecks << " kopecks" << std::endl;
    }

    virtual Money operator+(const Money& other) const
    {
        long totalRubles = rubles + other.rubles;
        unsigned char totalKopecks = kopecks + other.kopecks;
        if (totalKopecks >= 100)
        {
            totalRubles += totalKopecks / 100;
            totalKopecks = totalKopecks % 100;
        }
        return Money(totalRubles, totalKopecks);
    }

    virtual Money operator-(const Money& other) const
    {
        long totalRubles = rubles - other.rubles;
        int totalKopecks = kopecks - other.kopecks;
        if (totalKopecks < 0)
        {
            totalRubles -= 1;
            totalKopecks += 100;
        }
        return Money(totalRubles, (unsigned char)totalKopecks);
    }
};

int main()
{
    Money m1(10, 50), m2(20, 80);
    Money m3 = m1 + m2;
    m3.print();
    Money m4 = m1 - m2;
    m4.print();
    return 0;
}
