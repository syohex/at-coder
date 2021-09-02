#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int count = 0;
    if (b > 1) {
        while (b > 0) {
            b -= a;
            ++count;
            if (b > 0) {
                b += 1;
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}
