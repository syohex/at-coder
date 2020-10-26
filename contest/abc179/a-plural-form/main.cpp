#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    if (s.back() == 's') {
        std::cout << s << "es";
    } else {
        std::cout << s << "s";
    }

    return 0;
}
