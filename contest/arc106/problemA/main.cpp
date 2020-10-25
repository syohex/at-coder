#include <iostream>
#include <cstdint>

uint64_t power(uint64_t a, int b) {
    uint64_t n = 1;
    uint64_t prev = 1;
    for (int i = 0; i < b; ++i) {
        n *= a;
        if (prev != n / a) {
            return 0;
        }
        prev = n;
    }

    return n;
}

int main() {
    uint64_t n;
    std::cin >> n;

    for (int i = 1;; ++i) {
        uint64_t three = power(3, i);
        if (three == 0 || three > n) {
            break;
        }

        uint64_t m = n - three;
        if (m % 10 == 5) {
            for (int j = 1;; ++j) {
                uint64_t five = power(5, j);
                if (five == 0 || five > m) {
                    break;
                }

                if (five == m) {
                    std::cout << i << " " << j << std::endl;
                    return 0;
                }
            }
        }
    }

    std::cout << "-1" << std::endl;
    return 0;
}
