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
