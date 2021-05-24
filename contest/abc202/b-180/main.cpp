#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int len = s.size();
    std::string ret(len, 0);

    for (int i = 0; i < len; ++i) {
        char c = s[len - 1 - i];
        switch (c) {
        case '6':
            ret[i] = '9';
            break;
        case '9':
            ret[i] = '6';
            break;
        default:
            ret[i] = c;
            break;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
