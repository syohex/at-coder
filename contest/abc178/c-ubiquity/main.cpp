#include <iostream>

long power(long a, long b) {
    long ret = 1;
    for (long i = 0; i < b; ++i) {
        ret *= a;
    }

    return ret;
}

long power_mod(long a, long b, long mod) {
    long ret = 1;
    for (long i = 0; i < b; ++i) {
        ret *= a;
        ret %= mod;
    }

    return ret;
}

int main() {
    long n;
    std::cin >> n;

    long mod = power(10, 9) + 7;

    long non_zero = power_mod(9, n, mod);
    long non_nine = power_mod(9, n, mod);
    long non_zero_and_nine = power_mod(8, n, mod);
    long all_possibility = power_mod(10, n, mod);

    long ret = (all_possibility - non_zero - non_nine + non_zero_and_nine) % mod;
    if (ret < 0) {
        ret = (ret + mod) % mod;
    }
    std::cout << ret << std::endl;
    return 0;
}
