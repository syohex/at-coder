#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    n = std::pow(2, n);

    std::vector<int> v(n);
    std::map<int, int> m;
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        m[v[i]] = i + 1;
    }

    while (n > 2) {
        int pos = 0;
        for (int i = 0; i < n; i += 2) {
            v[pos++] = std::max(v[i], v[i + 1]);
        }

        n /= 2;
    }

    if (v[0] > v[1]) {
        std::cout << m[v[1]] << std::endl;
    } else {
        std::cout << m[v[0]] << std::endl;
    }

    return 0;
}
