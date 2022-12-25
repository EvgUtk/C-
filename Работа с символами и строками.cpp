#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;

    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] > str[i + 1]) {
            std::cout << i + 1 << std::endl;
            return 0;
        }
    }

    std::cout << 0 << std::endl;
    return 0;
}
