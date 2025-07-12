#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    n -= 1;

    std::vector<int> v;
    for (int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << v[i] << ' ';
        int sum = v[i];
        for (int j = i + 1; j < n; ++j) {
            sum += v[j];
            std::cout << sum;
            if (j != n - 1) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
    return 0;
}
