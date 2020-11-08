#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long n, m, k;
    std::cin >> n >> m >> k;

    std::vector<long> va(n), vb(m);
    for (long i = 0; i < n; ++i) {
        long v;
        std::cin >> v;
        va[i] = v;
    }
    for (long i = 0; i < m; ++i) {
        long v;
        std::cin >> v;
        vb[i] = v;
    }

    std::vector<long> vac(n + 1);
    vac[0] = 0;
    for (long i = 0; i < n; ++i) {
        vac[i + 1] = va[i] + vac[i];
    }
    std::vector<long> vbc(m + 1);
    vbc[0] = 0;
    for (long i = 0; i < m; ++i) {
        vbc[i + 1] = vb[i] + vbc[i];
    }

    long ret = 0;
    long j = m;
    for (long i = 0; i <= n; ++i) {
        if (vac[i] > k) {
            break;
        }

        while (vbc[j] > k - vac[i]) {
            --j;
        }

        ret = std::max(ret, i + j);
    }

    std::cout << ret << std::endl;
    return 0;
}
