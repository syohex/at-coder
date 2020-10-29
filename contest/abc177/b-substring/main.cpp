#include <iostream>
#include <string>
#include <climits>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    size_t min = 1000;
    size_t t_size = t.size();
    for (size_t i = 0; i <= s.size() - t_size; ++i) {
        size_t count = 0;
        for (size_t j = 0; j < t_size; ++j) {
            if (s[i + j] != t[j]) {
                ++count;
            }
        }

        if (count == 0) {
            std::cout << count << std::endl;
            return 0;
        }

        if (count < min) {
            min = count;
        }
    }

    std::cout << min << std::endl;
    return 0;
}
