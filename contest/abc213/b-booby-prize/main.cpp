#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> v(n);
    for (int i = 1; i <= n; ++i) {
        int tmp;
        std::cin >> tmp;
        v[i - 1] = {tmp, i};
    }

    std::sort(v.begin(), v.end(), [](const std::pair<int, int> &p1, const std::pair<int, int> &p2) { return p1.first < p2.first; });

    std::cout << v[v.size() - 2].second << std::endl;
    return 0;
}
