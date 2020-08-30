#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v;
    int tmp;
    while (std::cin >> tmp) {
        v.push_back(tmp);
        if (v.size() >= static_cast<size_t>(n)) {
            break;
        }
    }

    int count = 0;
    while (true) {
        for (int i = 0; i < n; ++i) {
            if (v[i] % 2 != 0) {
                std::cout << count << std::endl;
                return 0;
            }

            v[i] /= 2;
        }
        ++count;
    }

    std::cout << "0" << std::endl;
    return 0;
}
