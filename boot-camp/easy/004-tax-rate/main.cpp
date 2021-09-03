#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        auto val = static_cast<int>(i * 1.08);
        if (val == n) {
            std::cout << i << std::endl;
            return 0;
        }
    }

    std::cout << ":(" << std::endl;
    return 0;
}
