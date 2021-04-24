#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << "Yes" << std::endl;
        return 0;
    }

    while (n > 0) {
        int mod = n % 10;
        if (mod != 0) {
            break;
        }

        n /= 10;
    }

    std::vector<int> v;
    while (n > 0) {
        int mod = n % 10;
        v.push_back(mod);
        n /= 10;
    }

    int half = v.size() / 2;
    int end = v.size() - 1;
    for (int i = 0; i <= half; ++i) {
        if (v[i] != v[end - i]) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}
