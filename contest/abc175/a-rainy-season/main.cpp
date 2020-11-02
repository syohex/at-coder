#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int count = 0;
    int max = 0;
    for (const auto c : s) {
        if (c == 'R') {
            ++count;
            if (max < count) {
                max = count;
            }
        } else {
            count = 0;
        }
    }

    std::cout << max << std::endl;
    return 0;
}
