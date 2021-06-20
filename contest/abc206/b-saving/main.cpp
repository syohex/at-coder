#include <iostream>

int main() {
    long n;
    std::cin >> n;

    long sum = 0;
    for (long i = 1;; ++i) {
        sum += i;
        if (sum >= n) {
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}
