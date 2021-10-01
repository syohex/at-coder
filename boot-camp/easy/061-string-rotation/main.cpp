#include <iostream>
#include <string>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    if (s == t) {
        std::cout << "Yes" << std::endl;
        return 0;
    }

    if (s.size() != t.size()) {
        std::cout << "No" << std::endl;
        return 0;
    }

    int len = s.size();
    for (int i = 0; i < len; ++i) {
        int k = -1;
        for (int j = 0; j < len; ++j) {
            if (s[i] == t[j]) {
                k = j;
                break;
            }
        }

        if (k != -1) {
            int j = 0;
            for (; j < len; ++j) {
                if (s[(i + j) % len] != t[(k + j) % len]) {
                    break;
                }
            }

            if (j == len) {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}
