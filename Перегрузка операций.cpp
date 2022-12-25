#include <iostream>
#include <cmath>

class vector3D {
public:
    vector3D(double x, double y, double z) : x_(x), y_(y), z_(z) {}

    vector3D operator+(const vector3D& other) const {
        return vector3D(x_ + other.x_, y_ + other.y_, z_ + other.z_);
    }

    vector3D operator-(const vector3D& other) const {
        return vector3D(x_ - other.x_, y_ - other.y_, z_ - other.z_);
    }

    double operator*(const vector3D& other) const {
        return x_ * other.x_ + y_ * other.y_ + z_ * other.z_;
    }

    vector3D operator*(double scalar) const {
        return vector3D(scalar * x_, scalar * y_, scalar * z_);
    }

    bool operator==(const vector3D& other) const {
        return x_ == other.x_ && y_ == other.y_ && z_ == other.z_;
    }

    double length() const {
        return std::sqrt(x_ * x_ + y_ * y_ + z_ * z_);
    }

    bool operator<(const vector3D& other) const {
        return length() < other.length();
    }

private:
    double x_;
    double y_;
    double z_;
};
int main() {
    vector3D v1(1, 2, 3);
    vector3D v2(4, 5, 6);

    vector3D v3 = v1 + v2;
    vector3D v4 = v1 - v2;
    double s = v1 * v2;
    vector3D v5 = v1 * 2.0;
    bool b1 = v1 == v2;
    double l = v1.length();
    bool b2 = v1 < v2;