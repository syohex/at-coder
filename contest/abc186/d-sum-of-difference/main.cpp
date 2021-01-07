#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<long> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::greater<int>());

    std::vector<long> acc(n + 1);
    acc[0] = 0;
    for (int i = 0; i < n; ++i) {
        acc[i + 1] = v[i] + acc[i];
    }

    long sum = 0;
    for (int i = 1; i < n; ++i) {
        long a = (n - i) * (acc[i] - acc[i - 1]);
        long b = acc[n] - acc[i];
        sum += std::abs(a - b);
    }

    std::cout << sum << std::endl;
    return 0;
}
