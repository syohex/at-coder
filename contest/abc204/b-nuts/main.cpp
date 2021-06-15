#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;
        sum += std::max(0, tmp - 10);
    }

    std::cout << sum << std::endl;
    return 0;
}
