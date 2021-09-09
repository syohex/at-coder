#include <iostream>
#include <string>
#include <map>

int main() {
    std::string s;
    std::cin >> s;

    std::map<char, int> m;
    for (auto c : s) {
        ++m[c];
    }

    for (const auto &it : m) {
        if (it.second % 2 != 0) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}
