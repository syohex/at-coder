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

    std::sort(v.begin(), v.end());

    int ret = INT_MAX;
    for (int i = v[0]; i <= v.back(); ++i) {
        int sum = 0;
        for (int pos : v) {
            int distance = pos - i;
            sum += distance * distance;
        }

        ret = std::min(ret, sum);
    }

    std::cout << ret << std::endl;
    return 0;
}
