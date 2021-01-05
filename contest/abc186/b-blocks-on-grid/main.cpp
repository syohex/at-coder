#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

int main() {
    int height, width;
    std::cin >> height >> width;

    std::vector<int> v(height * width);
    int min = INT_MAX;
    for (size_t i = 0; i < v.size(); ++i) {
        std::cin >> v[i];
        min = std::min(min, v[i]);
    }

    int ret = 0;
    for (int n : v) {
        ret += n - min;
    }

    std::cout << ret << std::endl;
    return 0;
}
