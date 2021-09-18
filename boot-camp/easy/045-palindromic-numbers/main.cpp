#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int ret = 0;
    for (int i = a; i <= b; ++i) {
        int a5 = i / 10000;
        int a4 = (i % 10000) / 1000;
        int a2 = (i % 100) / 10;
        int a1 = i % 10;

        if (a1 == a5 && a2 == a4) {
            ++ret;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
