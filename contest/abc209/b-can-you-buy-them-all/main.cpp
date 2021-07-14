#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    int money;
    std::cin >> money;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            sum += v[i - 1];
        } else {
            sum += v[i - 1] - 1;
        }
    }

    if (sum <= money) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
