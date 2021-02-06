#include <iostream>
#include <climits>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int scores[4] = {};
    for (int i = 0; i < n; ++i) {
        char c;
        std::cin >> c;
        ++scores[c - '1'];
    }

    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < 4; ++i) {
        min = std::min(min, scores[i]);
        max = std::max(max, scores[i]);
    }

    std::cout << max << " " << min << std::endl;
    return 0;
}
