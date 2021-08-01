#include <iostream>

int main() {
    char x1, x2, x3, x4;
    std::cin >> x1 >> x2 >> x3 >> x4;

    if (x1 == x2 && x2 == x3 && x3 == x4 && x4 == x1) {
        std::cout << "Weak" << std::endl;
        return 0;
    }

    int n1 = x1 - '0';
    int n2 = x2 - '0';
    int n3 = x3 - '0';
    int n4 = x4 - '0';

    if ((n2 == (n1 + 1) % 10) && (n3 == (n2 + 1) % 10) && (n4 == (n3 + 1) % 10)) {
        std::cout << "Weak" << std::endl;
        return 0;
    }

    std::cout << "Strong" << std::endl;
    return 0;
}
