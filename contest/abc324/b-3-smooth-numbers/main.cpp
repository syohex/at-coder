#include <vector>
#include <iostream>
#include <cstdint>

int main() {
    int64_t n;
    std::cin >> n;

    while (n != 1) {
        if (n % 3 != 0) {
            break;
        }

        n /= 3;
    }

    while (n != 1) {
        if (n % 2 != 0) {
            break;
        }

        n /= 2;
    }

    if (n == 1) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
