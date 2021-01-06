#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int count = 0;
    int n10, n8;
    for (int i = 1; i <= n; ++i) {
        n10 = n8 = i;
        while (n10 > 0) {
            if (n10 % 10 == 7) {
                ++count;
                goto next;
            }

            n10 /= 10;
        }
        while (n8 > 0) {
            if (n8 % 8 == 7) {
                ++count;
                goto next;
            }

            n8 /= 8;
        }
    next:;
    }

    std::cout << (n - count) << std::endl;
    return 0;
}
