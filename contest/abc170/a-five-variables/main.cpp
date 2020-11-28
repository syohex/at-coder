#include <iostream>

int main() {
    int n;
    for (int i = 1; i <= 5; ++i) {
        std::cin >> n;
        if (n != i) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
