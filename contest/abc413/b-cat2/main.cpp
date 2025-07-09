#include <iostream>
#include <string>
#include <set>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> v;
    for (int i = 0; i <n; ++i) {
        std::string s;
        std::cin >> s;
        v.push_back(std::move(s));
    }

    std::set<std::string> s;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                continue;
            }

            s.insert(v[i] + v[j]);
        }
    }

    std::cout << s.size() << std::endl;
    return 0;
}
