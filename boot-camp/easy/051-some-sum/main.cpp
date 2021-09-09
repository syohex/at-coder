#include <iostream>
#include <map>

int main() {
    int n, a, b;
    std::cin >> n >> a >> b;

    int ret = 0;
    std::map<int, int> cache;
    for (int i = 1; i <= n; ++i) {
        int tmp = i;
        int sum = 0;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
            if (cache.find(tmp) != cache.end()) {
                sum += cache[tmp];
                break;
            }
        }

        cache[i] = sum;
        if (sum >= a && sum <= b) {
            ret += i;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}