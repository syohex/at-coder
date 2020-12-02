#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    if (std::equal(s.begin(), s.end(), t.begin())) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
