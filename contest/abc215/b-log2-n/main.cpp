#include <iostream>
#include <cmath>

int main() {
    std::uint64_t n;
    std::cin >> n;

    if (n == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }

    std::uint64_t m = 2;
    for (int i = 1;; ++i) {
        if (m > n) {
            std::cout << i - 1 << std::endl;
            return 0;
        }

        m *= 2;
    }

    return 0;
}
