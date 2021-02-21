#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    const auto g1 = [](long a) {
        std::vector<long> v;
        while (a > 0) {
            v.push_back(a % 10);
            a /= 10;
        }

        std::sort(v.begin(), v.end(), std::greater<long>());

        long ret = 0;
        long n = 1;
        for (auto it = v.rbegin(); it != v.rend(); ++it, n *= 10) {
            ret += *it * n;
        }

        return ret;
    };

    const auto g2 = [](long a) {
        std::vector<long> v;
        while (a > 0) {
            v.push_back(a % 10);
            a /= 10;
        }

        std::sort(v.begin(), v.end());

        long ret = 0;
        long n = 1;
        for (auto it = v.rbegin(); it != v.rend(); ++it, n *= 10) {
            ret += *it * n;
        }

        return ret;
    };

    const auto f = [&g1, &g2](long a) { return g1(a) - g2(a); };

    long n, k;
    std::cin >> n >> k;

    long ret = n;
    for (long i = 0; i < k; ++i) {
        ret = f(ret);
    }

    std::cout << ret << std::endl;
    return 0;
}
