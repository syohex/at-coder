#include <iostream>

int main() {
    int a, b, c, x;
    std::cin >> a >> b >> c >> x;

    int ret = 0;
    for (int i = 0; i <= a; ++i) {
        for (int j = 0; j <= b; ++j) {
            for (int k = 0; k <= c; ++k) {
                int sum = 500 * i + 100 * j + 50 * k;
                if (sum == x) {
                    ++ret;
                }
            }
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
