#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int ret = 0;
    for (int i = 0; i < k; ++i) {
        ret += v[i];
    }

    std::cout << ret << std::endl;
    return 0;
}
