#include <iostream>
#include <string>

class Liquid {
public:
    Liquid(const std::string& name, double density)
        : name_(name), density_(density) {}

    void set_name(const std::string& name) { name_ = name; }
    void set_density(double density) { density_ = density; }

    const std::string& get_name() const { return name_; }
    double get_density() const { return density_; }

private:
    std::string name_;
    double density_;
};

class Alcohol : public Liquid {
public:
    Alcohol(const std::string& name, double density, double strength)
        : Liquid(name, density), strength_(strength) {}

    void set_strength(double strength) { strength_ = strength; }
    double get_strength() const { return strength_; }

private:
    double strength_;
};
int main() {
    Liquid water("Water", 1.0);
    std::cout << water.get_name() << " has density " << water.get_density() << std::endl;


    Alcohol vodka("Vodka", 0.9, 40.0);
    std::cout << vodka.get_name() << " has strength " << vodka.get_strength() << std::endl;


}