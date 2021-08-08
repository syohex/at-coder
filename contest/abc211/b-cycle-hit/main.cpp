#include <iostream>
#include <string>
#include <map>

int main() {
    std::string s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;

    std::map<std::string, int> m;
    ++m[s1];
    ++m[s2];
    ++m[s3];
    ++m[s4];

    if (m["H"] == 1 && m["2B"] == 1 && m["3B"] == 1 && m["HR"] == 1) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
