#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int ret = 1;
    int max_count = 0;
    for (int i = 1; i <= n; ++i) {
        int count = 0;
        int num = i;
        while (num % 2 == 0) {
            ++count;
            num /= 2;
        }

        if (max_count < count) {
            max_count = count;
            ret = i;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}