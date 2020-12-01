#include <iostream>

int main() {
    int n;
    std::cin >> n;

    switch (n % 10) {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
        std::cout << "hon" << std::endl;
        break;
    case 0:
    case 1:
    case 6:
    case 8:
        std::cout << "pon" << std::endl;
        break;
    case 3:
        std::cout << "bon" << std::endl;
        break;
    }
    return 0;
}
