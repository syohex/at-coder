#include <iostream>

int main() {
    int k;
    std::cin >> k;

    if (k == 1 || k == 7) {
        std::cout << 1 << std::endl;
        return 0;
    }

    int prev = 7;
    for (int i = 2; i <= k; ++i) {
        int v = (prev * 10 + 7) % k;
        if (v == 0) {
            std::cout << i << std::endl;
            return 0;
        }

        prev = v;
    }

    std::cout << -1 << std::endl;
    return 0;
}
