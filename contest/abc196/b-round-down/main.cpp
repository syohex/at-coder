#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string ret;
    size_t pos = 0;
    while (pos < s.size() && s[pos] != '.') {
        ret.push_back(s[pos]);
        ++pos;
    }

    std::cout << ret << std::endl;
    return 0;
}
