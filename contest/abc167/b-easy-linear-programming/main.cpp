#include <iostream>

int main() {
    int a, b, c, k;
    std::cin >> a >> b >> c >> k;

    int ret = 0;
    if (k > a) {
        ret += a;
        k -= a;
    } else {
        std::cout << k << std::endl;
        return 0;
    }

    if (k > b) {
        k -= b;
    } else {
        std::cout << ret << std::endl;
        return 0;
    }

    ret -= k;

    std::cout << ret << std::endl;
    return 0;
}
