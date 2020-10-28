#include <iostream>

int main() {
    int d, t, s;
    std::cin >> d >> t >> s;

    std::cout << ((t * s >= d) ? "Yes" : "No") << std::endl;
    return 0;
}
