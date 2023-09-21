#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    int len = s.size();
    int ret = 1;
    for (int i = 0; i < len; ++i) {
        // odd length
        int j = 1;
        int ret_odd = 1;
        while (i - j >= 0 && i + j < len && s[i - j] == s[i + j]) {
            j += 1;
            ret_odd += 2;
        }

        // even length
        int k = 0;
        int ret_even = 0;
        while (i - k >= 0 && i + k + 1 < len && s[i - k] == s[i + k + 1]) {
            k += 1;
            ret_even += 2;
        }

        ret = std::max(ret, std::max(ret_odd, ret_even));
    }

    std::cout << ret << std::endl;
    return 0;
}
