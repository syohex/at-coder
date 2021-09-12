#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    int ret = 0;
    int count = 0;
    for (char c : s) {
        if (c == 'I') {
            ++count;
        } else {
            --count;
        }
        ret = std::max(ret, count);
    }

    std::cout << ret << std::endl;
    return 0;
}
