#include <iostream>

int main() {
    int s, t;
    std::cin >> s >> t;

    int ret = 0;
    for (int a = 0;; ++a) {
        if (a > s) {
            break;
        }
        for (int b = 0;; ++b) {
            if (a + b > s) {
                break;
            }
            for (int c = 0;; ++c) {
                if (a + b + c <= s && a * b * c <= t) {
                    ++ret;
                    continue;
                }

                break;
            }
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
