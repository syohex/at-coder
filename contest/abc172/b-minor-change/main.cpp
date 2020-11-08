#include <iostream>
#include <string>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    int diff = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] != t[i]) {
            ++diff;
        }
    }

    std::cout << diff << std::endl;
    return 0;
}
