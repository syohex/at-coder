#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    int ret = 0;
    for (int i = 0; i < n; ++i) {
        int height = INT_MAX;
        for (int j = i; j < n; ++j) {
            height = std::min(height, v[j]);
            int area = (j - i + 1) * height;
            ret = std::max(ret, area);
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
