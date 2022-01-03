#include <iostream>
#include <string>

int main() {
    int left, right;
    std::string s;

    std::cin >> left >> right >> s;

    --left;
    --right;

    int len = s.size();
    std::string t;
    for (int i = 0; i < left; ++i) {
        t.push_back(s[i]);
    }

    for (int i = right; i >= left; --i) {
        t.push_back(s[i]);
    }

    for (int i = right + 1; i < len; ++i) {
        t.push_back(s[i]);
    }

    std::cout << t << std::endl;
    return 0;
}
