#include <iostream>
#include <cstdint>

int main() {
    std::int64_t a, b;
    std::cin >> a >> b;

    while (a > 0 && b > 0) {
        int m = a % 10;
        int n = b % 10;

        if (m + n >= 10) {
            std::cout << "Hard" << std::endl;
            return 0;
        }

        a /= 10;
        b /= 10;
    }

    std::cout << "Easy" << std::endl;
    return 0;
}
