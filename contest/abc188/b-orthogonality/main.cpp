#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<long> v(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    long sum = 0;
    long b;
    for (int i = 0; i < n; ++i) {
        std::cin >> b;
        sum += (v[i] * b);
    }

    std::cout << (sum == 0 ? "Yes" : "No") << std::endl;
    return 0;
}
