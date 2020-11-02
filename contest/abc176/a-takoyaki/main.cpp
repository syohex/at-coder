#include <iostream>

int main() {
    long n, x, t;
    std::cin >> n >> x >> t;

    long ret = ((n - 1 + x) / x) * t;
    std::cout << ret << std::endl;
    return 0;
}
