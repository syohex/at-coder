#include <iostream>

int main() {
    long n;

    std::cin >> n;

    long *arr = new long[n];
    long sum = 0;
    long mod = 1000000007;

    for (long i = 0; i < n; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
        sum %= mod;
    }

    long ret = 0;
    for (long i = 0; i < n; ++i) {
        sum -= arr[i];
        if (sum < 0) {
            sum += mod;
        }

        ret += arr[i] * sum;
        ret %= mod;
    }

    std::cout << ret << std::endl;
    return 0;
}
