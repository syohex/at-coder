#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string a, b;
    std::cin >> a >> b;

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    if (a.size() > b.size()) {
        size_t diff = a.size() - b.size();
        for (size_t i = 0; i < diff; ++i) {
            b.push_back('0');
        }
    } else {
        size_t diff = b.size() - a.size();
        for (size_t i = 0; i < diff; ++i) {
            a.push_back('0');
        }
    }

    int len = a.size();
    for (int i = len - 1; i >= 0; --i) {
        if (a[i] > b[i]) {
            std::cout << "GREATER" << std::endl;
            return 0;
        } else if (a[i] < b[i]) {
            std::cout << "LESS" << std::endl;
            return 0;
        }
    }

    std::cout << "EQUAL" << std::endl;
    return 0;
}
