#include <iostream>
#include <cstdint>

int main() {
    int64_t k, a, b;
    std::cin >> k >> a >> b;

    const auto f = [](int64_t n, int64_t base) -> int64_t {
        int64_t ret = 0;
        int64_t d = 1;
        while (n > 0) {
            ret += d * (n % 10);
            n /= 10;
            d *= base;
        }
        return ret;
    };

    auto ret = f(a, k) * f(b, k);
    std::cout << ret << std::endl;
    return 0;
}
