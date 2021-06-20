#include <iostream>
#include <vector>
#include <map>

int main() {
    long n;
    std::cin >> n;

    std::vector<long> v(n);
    std::map<int, long> m;
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        ++m[v[i]];
    }

    long ret = 0;
    long len = n;
    for (long i = 0; i < len - 1; ++i) {
        ret += n - m[v[i]];
        --m[v[i]];
        --n;
    }

    std::cout << ret << std::endl;
    return 0;
}
