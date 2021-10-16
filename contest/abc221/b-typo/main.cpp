#include <iostream>
#include <string>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    bool swapped = false;
    for (size_t i = 0; i < s.size();) {
        if (s[i] != t[i]) {
            if (swapped || i == s.size() - 1) {
                std::cout << "No" << std::endl;
                return 0;
            }

            if (s[i] == t[i + 1] && s[i + 1] == t[i]) {
                swapped = true;
                i += 2;
            } else {
                std::cout << "No" << std::endl;
                return 0;
            }
        } else {
            ++i;
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}
