#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;

    int len = s.size();
    std::vector<long> dp(len, 0);
    std::string input("chokudai");
    constexpr long MOD = 1'000'000'007;

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < len; ++j) {
            if (s[j] == input[i]) {
                if (i == 0) {
                    dp[j] = 1;
                } else {
                    long tmp = 0;
                    for (int k = 0; k < j; ++k) {
                        if (s[k] == input[i - 1]) {
                            tmp += dp[k] % MOD;
                        }
                    }

                    dp[j] = tmp;
                }
            }
        }
    }

    long ret = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] == 'i') {
            ret += dp[i] % MOD;
        }
    }

    std::cout << ret % MOD << std::endl;
    return 0;
}