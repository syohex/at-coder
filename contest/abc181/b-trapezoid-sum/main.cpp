#include <iostream>
#include <vector>

int main() {
    long n;
    std::cin >> n;

    std::vector<long> a(n), b(n);
    for (long i = 0; i < n; ++i) {
        std::cin >> a[i] >> b[i];
    }

    long sum = 0;
    for (long i = 0; i < n; ++i) {
        sum += ((b[i] - a[i] + 1) * (a[i] + b[i])) / 2;
    }

    std::cout << sum << std::endl;
    return 0;
}
