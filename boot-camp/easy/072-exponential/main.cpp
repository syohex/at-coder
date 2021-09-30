#include <iostream>
#include <algorithm>

int main() {
    int x;
    std::cin >> x;

    int max = 1;
    for (int i = 1;; ++i) {
        bool ok = false;
        for (int j = 2;; ++j) {
            int mul = j;
            for (int k = 0; k < i; ++k) {
                mul *= j;
            }

            if (mul > x) {
                break;
            }

            ok = true;
            max = std::max(max, mul);
        }

        if (!ok) {
            break;
        }
    }
    std::cout << max << std::endl;
    return 0;
}
