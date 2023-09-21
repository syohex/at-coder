#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    const auto pow = [](int n, int power) {
        int ret = 1;
        for (int i = 0; i < power; ++i) {
            ret *= n;
        }

        return ret;
    };

    int ret = pow(a, b) + pow(b, a);
    std::cout << ret << std::endl;
    return 0;
}
