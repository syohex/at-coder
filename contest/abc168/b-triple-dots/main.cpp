#include <iostream>
#include <string>

int main() {
    int k;
    std::cin >> k;

    std::string s;
    std::cin >> s;

    if (s.size() <= static_cast<size_t>(k)) {
        std::cout << s << std::endl;
        return 0;
    }

    for (int i = 0; i < k; ++i) {
        std::cout << s[i];
    }

    std::cout << "..." << std::endl;
    return 0;
}
