#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;

    char c;
    for (int i = 0; i < n; ++i) {
        std::cin >> c;
        if (c == 'o') {
            ++x;
        } else {
            if (x > 0) {
                --x;
            }
        }
    }

    std::cout << x << std::endl;
    return 0;
}
