#include <iostream>
#include <map>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::map<std::string, int> m{
        {"AC", 0},
        {"WA", 0},
        {"TLE", 0},
        {"RE", 0},
    };

    std::string s;
    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        ++m[s];
    }

    for (const auto *s : {"AC", "WA", "TLE", "RE"}) {
        std::cout << s << " x " << m[s] << std::endl;
    }

    return 0;
}
