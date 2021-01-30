#include <iostream>

int main() {
    char c[3];
    std::cin >> c[0] >> c[1] >> c[2];

    if (c[0] == c[1] && c[1] == c[2]) {
        std::cout << "Won" << std::endl;
    } else {
        std::cout << "Lost" << std::endl;
    }
    return 0;
}
