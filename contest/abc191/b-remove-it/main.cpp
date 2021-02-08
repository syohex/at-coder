#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;

    int j;
    std::cin >> j;
    if (j != x) {
        std::cout << j;
    }
    for (int i = 1; i < n; ++i) {
        std::cin >> j;
        if (j != x) {
            std::cout << ' ' << j;
        }
    }

    std::cout << std::endl;
    return 0;
}
