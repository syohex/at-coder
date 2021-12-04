#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int len = s.size();
    int i = 0;
    while (i < len && s[i] != 'o') {
        ++i;
    }

    if (i != len) {
        for (int j = i; j < len; ++j) {
            char c = (j - i) % 3 == 0 ? 'o' : 'x';
            if (s[j] != c) {
                std::cout << "No" << std::endl;
                return 0;
            }
        }

        for (int j = i - 1; j >= 0; --j) {
            char c = (i - 1 - j) % 3 == 2 ? 'o' : 'x';
            if (s[j] != c) {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
        std::cout << "Yes" << std::endl;
    } else {
        if (s.size() <= 2) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
