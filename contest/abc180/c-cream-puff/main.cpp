#include <iostream>
#include <cstdint>
#include <cmath>
#include <set>

int main() {
    int64_t n;
    std::cin >> n;

    std::set<int64_t> s;
    s.insert(1);
    s.insert(n);

    int64_t limit = sqrt(n);
    for (int64_t i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            int64_t div = n / i;
            s.insert(i);
            s.insert(div);
        }
    }

    for (const auto v : s) {
        std::cout << v << "\n";
    }
    return 0;
}
