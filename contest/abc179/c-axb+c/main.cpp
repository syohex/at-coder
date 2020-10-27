#include <iostream>

int main() {
    long n;
    std::cin >> n;

    int ret = 0;
    for (long a = 1; a < n; ++a) {
        for (long b = 1; b < n; ++b) {
            if (a * b >= n) {
                break;
            }

            ++ret;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
