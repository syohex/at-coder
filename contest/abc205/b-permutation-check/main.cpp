#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<bool> v(n, false);
    for (int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;

        if (v[tmp - 1]) {
            std::cout << "No" << std::endl;
            return 0;
        }

        v[tmp - 1] = true;
    }

    std::cout << "Yes" << std::endl;
    return 0;
}
