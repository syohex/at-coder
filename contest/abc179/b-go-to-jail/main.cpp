#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int zorome = 0;
    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        if (x == y) {
            ++zorome;
            if (zorome == 3) {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        } else {
            zorome = 0;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}
