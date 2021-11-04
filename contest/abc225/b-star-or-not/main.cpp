#include <iostream>
#include <map>
#include <set>

int main() {
    int n;
    std::cin >> n;

    std::map<int, std::set<int>> m;
    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        std::cin >> a >> b;

        m[a].insert(b);
        m[b].insert(a);
    }

    for (const auto &it : m) {
        if (it.second.size() == n - 1) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}
