#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 2 == 1) {
        std::cout << "Black" << std::endl;
    } else {
        std::cout << "White" << std::endl;
    }
    return 0;
}
