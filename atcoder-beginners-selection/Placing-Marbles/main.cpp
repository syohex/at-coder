#include <iostream>

int main() {
    char a, b, c;
    std::cin >> a >> b >> c;

    int ret = (a - '0') + (b - '0') + (c - '0');
    std::cout << ret << std::endl;
    return 0;
}
