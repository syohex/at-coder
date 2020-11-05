#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int change = (1000 - (n % 1000)) % 1000;
    std::cout << change << std::endl;
    return 0;
}
