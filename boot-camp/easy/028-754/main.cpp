#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main() {
    std::string s;
    std::cin >> s;

    int ret = 10000000;
    int len = s.size();
    for (int i = 2; i < len; ++i) {
        int sum = 0;
        for (int j = i, k = 1; j >= i - 2; --j, k *= 10) {
            sum += (s[j] - '0') * k;
        }

        ret = std::min(ret, std::abs(sum - 753));
    }

    std::cout << ret << std::endl;
    return 0;
}
