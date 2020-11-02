#include <iostream>
#include <vector>

int main() {
    long n;
    std::cin >> n;

    std::vector<long> v(n);
    std::cin >> v[0];
    long ret = 0;
    for (long i = 1; i < n; ++i) {
        std::cin >> v[i];
        long diff = v[i - 1] - v[i];
        if (diff > 0) {
            ret += diff;
            v[i] += diff;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
