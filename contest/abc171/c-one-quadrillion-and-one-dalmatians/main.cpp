#include <iostream>
#include <string>
#include <algorithm>

int main() {
    long n;
    std::cin >> n;

    std::string s;
    while (n > 0) {
        long mod = ((n - 1) % 26);
        s.push_back('a' + mod);
        n = (n - 1) / 26;
    }

    std::reverse(s.begin(), s.end());
    std::cout << s << std::endl;
    return 0;
}
