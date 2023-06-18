#include <iostream>
#include <cstdint>

int main() {
    uint64_t n = 0;
    uint64_t v = 1;
    for (int i = 0; i < 64; ++i) {
        uint64_t tmp;
        std::cin >> tmp;

        n += v * tmp;
        v <<= 1;
    }

    std::cout << n << std::endl;
    return 0;
}
