#include <iostream>
#include <vector>

int main() {
    std::vector<bool> v(2001, false);
    int n;

    std::cin >> n;

    int tmp;
    for (int i = 0; i < n; ++i) {
        std::cin >> tmp;
        v[tmp] = true;
    }

    for (int i = 0; i <= 2000; ++i) {
        if (!v[i]) {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}
