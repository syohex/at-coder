#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<long> v(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    sort(v.begin(), v.end());

    size_t limit = v.size();
    if (limit <= 2) {
        std::cout << 0 << std::endl;
        return 0;
    }

    int ret = 0;
    for (size_t i = 0; i < limit - 2; ++i) {
        for (size_t j = i + 1; j < limit - 1; ++j) {
            if (v[i] == v[j]) {
                continue;
            }

            for (size_t k = j + 1; k < limit; ++k) {
                if (v[j] == v[k]) {
                    continue;
                }

                if (v[i] + v[j] > v[k]) {
                    ++ret;
                }
            }
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
