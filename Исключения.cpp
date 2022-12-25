#include <stdexcept>  

int hours_to_seconds(int hours, int minutes) {
    if (hours < 0 || minutes < 0 || minutes >= 60) {
        throw std::invalid_argument("Invalid hours or minutes");
    }

    return hours * 3600 + minutes * 60;
}

int hours_to_seconds_throw(int hours, int minutes) throw() {
    if (hours < 0 || minutes < 0 || minutes >= 60) {
        throw std::invalid_argument("Invalid hours or minutes");
    }

    return hours * 3600 + minutes * 60;
}

int hours_to_seconds_std(int hours, int minutes) throw(std::invalid_argument) {
    if (hours < 0 || minutes < 0 || minutes >= 60) {
        throw std::invalid_argument("Invalid hours or minutes");
    }

    return hours * 3600 + minutes * 60;
}

class InvalidHoursOrMinutes : public std::exception {
public:
    const char* what() const throw() {
        return "Invalid hours or minutes";
    }
};

int hours_to_seconds_custom(int hours, int minutes) throw(InvalidHoursOrMinutes) {
    if (hours < 0 || minutes < 0 || minutes >= 60) {
        throw InvalidHoursOrMinutes();
    }

    return hours * 3600 + minutes * 60;
}
