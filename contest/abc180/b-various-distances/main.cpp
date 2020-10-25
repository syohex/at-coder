#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>

int main() {
    int n;
    long x;

    std::cin >> n;
    std::vector<long> nums(n);

    int i = 0;
    while (std::cin >> x) {
        nums[i++] = x;
    }

    long man = 0, che = 0;
    double unu = 0;
    for (int i = 0; i < n; ++i) {
        long abs = std::abs(nums[i]);
        man += abs;
        unu += abs * abs;
        che = std::max(abs, che);
    }

    std::cout << man << "\n" << std::setprecision(11) << std::sqrt(unu) << "\n" << che << std::endl;
    return 0;
}
