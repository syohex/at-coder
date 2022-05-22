#include <iostream>
#include <vector>

int main() {
    int n, m;

    std::cin >> n >> m;

    std::vector<int> v(3, -1);
    for (int i = 0; i < m; ++i) {
        int s, c;
        std::cin >> s >> c;

        if (v[s - 1] != -1) {
            if (v[s - 1] != c) {
                std::cout << "-1" << std::endl;
                return 0;
            }
        } else {
            v[s - 1] = c;
        }
    }

    if (v[0] == 0 && n != 1) {
        std::cout << "-1" << std::endl;
        return 0;
    }

    int ret = 0;
    if (n == 1) {
        if (v[0] == -1) {
            ret = 0;
        } else {
            ret = v[0];
        }

        std::cout << ret << std::endl;
        return 0;
    }

    if (v[0] == -1) {
        ret = 1;
    } else {
        ret = v[0];
    }

    for (int i = 1; i < n; ++i) {
        if (v[i] == -1) {
            ret = ret * 10;
        } else {
            ret = ret * 10 + v[i];
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
