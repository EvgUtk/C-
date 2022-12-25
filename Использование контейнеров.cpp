#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Set the digit to look for
    int digit = 3;

    // Insert the new element after all elements that end with the given digit
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it % 10 == digit) {
            it = numbers.insert(it + 1, 0);
        }
    }

    // Print the modified vector
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
