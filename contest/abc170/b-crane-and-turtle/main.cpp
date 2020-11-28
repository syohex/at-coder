#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    for (int i = 0; i <= x; ++i) {
        int j = x - i;
        if (2 * i + 4 * j == y) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}
