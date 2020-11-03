#include <iostream>
#include <cmath>

int main(void) {
    long n, d;
    std::cin >> n >> d;

    long ret = 0;
    long x, y;
    for (long i = 0; i < n; ++i) {
        std::cin >> x >> y;

        double r = std::sqrt(x * x + y * y);
        if (r <= d) {
            ++ret;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
