#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;

    int ret = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            ret += (100 * i) + j;
        }
    }
    std::cout << ret << std::endl;
    return 0;
}
