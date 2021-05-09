#include <cassert>
#include <iostream>

int main() {
    long n, k;
    std::cin >> n >> k;

    for (long i = 0; i < k; ++i) {
        if (n % 200 == 0) {
            n /= 200;
        } else {
            n = n * 1000 + 200;
        }
    }

    std::cout << n << std::endl;
    return 0;
}
