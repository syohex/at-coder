#include <iostream>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;

    std::string s;
    std::cin >> s;

    size_t pos = s.find('-');
    if (pos == std::string::npos) {
        std::cout << "No" << std::endl;
        return 0;
    }

    size_t pos2 = s.find('-', pos + 1);
    if (pos2 != std::string::npos) {
        std::cout << "No" << std::endl;
        return 0;
    }

    int len = s.size();
    int p = pos;
    if (p == a && len - (p + 1) == b) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
