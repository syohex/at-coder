#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int len = s.size();
    int start = 0;
    int end = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] == 'A') {
            start = i;
            break;
        }
    }
    for (int i = len - 1; i >= 0; --i) {
        if (s[i] == 'Z') {
            end = i;
            break;
        }
    }

    std::cout << (end - start + 1) << std::endl;
    return 0;
}
