#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    int limit = s.size();
    int len = 0;
    int ret = 0;
    for (int i = 0; i < limit; ++i) {
        char c = s[i];
        if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
            ++len;
        } else {
            ret = std::max(ret, len);
            len = 0;
        }
    }

    ret = std::max(ret, len);
    std::cout << ret << std::endl;
    return 0;
}
