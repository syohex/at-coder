#include <iostream>

int main() {
    int a;
    std::cin >> a;

    int ret = a + (a * a) + (a * a * a);
    std::cout << ret << std::endl;
    return 0;
}
