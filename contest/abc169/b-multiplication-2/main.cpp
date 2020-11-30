#include <iostream>
#include <vector>

unsigned long power(unsigned long n, unsigned long p) {
    unsigned long ret = 1;
    for (unsigned long i = 0; i < p; ++i) {
        ret *= n;
    }

    return ret;
}

int main() {
    unsigned long n;
    std::cin >> n;

    std::vector<unsigned long> v(n);
    for (unsigned long i = 0; i < n; ++i) {
        std::cin >> v[i];
        if (v[i] == 0) {
            std::cout << 0 << std::endl;
            return 0;
        }
    }

    unsigned long ret = 1;
    unsigned long limit = power(10, 18);
    for (unsigned long m : v) {
        if (ret > limit / m) {
            std::cout << -1 << std::endl;
            return 0;
        }

        ret *= m;
    }

    std::cout << ret << std::endl;
    return 0;
}
