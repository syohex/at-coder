#include <iostream>
#include <algorithm>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    int row = INT_MIN;
    int high = INT_MAX;
    int m;
    for (int i = 0; i < n; ++i) {
        std::cin >> m;
        row = std::max(row, m);
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> m;
        high = std::min(high, m);
    }

    if (high < row) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << high - row + 1 << std::endl;
    }
    return 0;
}
