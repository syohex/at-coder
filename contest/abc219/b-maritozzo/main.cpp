#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> v(3);
    std::string t;

    for (int i = 0; i < 3; ++i) {
        std::cin >> v[i];
    }
    std::cin >> t;

    std::string ret;
    for (char c : t) {
        int index = c - '1';
        ret += v[index];
    }

    std::cout << ret << std::endl;
    return 0;
}
