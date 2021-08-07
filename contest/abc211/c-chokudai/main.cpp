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

    std::vector<std::vector<int>> indexes(8);
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < len; ++j) {
            if (s[j] == input[i]) {
                indexes[i].push_back(j);
                if (i == 0) {
                    dp[j] = 1;
                } else {
                    long tmp = 0;
                    int limit = indexes[i - 1].size();
                    for (int k = 0; k < limit; ++k) {
                        int index = indexes[i - 1][k];
                        if (index >= j) {
                            break;
                        }

                        tmp += dp[indexes[i - 1][k]] % MOD;
                    }

                    dp[j] = tmp;
                }
            }
        }
    }

    long ret = 0;
    for (auto index : indexes.back()) {
        ret += dp[index] % MOD;
    }

    std::cout << ret % MOD << std::endl;
    return 0;
}