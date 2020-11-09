#include <iostream>

int main() {
    char c;
    std::cin >> c;

    if (c >= 'a' && c <= 'z') {
        std::cout << 'a' << std::endl;
    }
    if (c >= 'A' && c <= 'Z') {
        std::cout << 'A' << std::endl;
    }
    return 0;
}
