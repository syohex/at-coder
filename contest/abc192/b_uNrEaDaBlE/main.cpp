#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;

    for (size_t i = 1; i <= s.size(); ++i) {
        int c = s[i - 1];
        if ((i % 2 == 1 && !std::islower(c)) || ((i % 2 == 0) && !std::isupper(c))) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}
