#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int table[26] = {};
    for (char c : s) {
        ++table[c - 'a'];
    }

    for (int i = 0; i < 26; ++i) {
        if (table[i] == 0) {
            std::cout << static_cast<char>(i + 'a') << std::endl;
            return 0;
        }
    }

    std::cout << "None" << std::endl;
    return 0;
}
