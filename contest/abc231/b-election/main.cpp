#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <utility>

int main() {
    int n;
    std::cin >> n;

    std::map<std::string, int> m;
    std::string name;
    for (int i = 0; i < n; ++i) {
        std::cin >> name;
        ++m[name];
    }

    struct Data {
        std::string name;
        int count;
    };

    std::vector<Data> v;
    for (const auto &it : m) {
        v.push_back({it.first, it.second});
    }

    std::sort(v.begin(), v.end(), [](const Data &a, const Data &b) { return a.count > b.count; });

    std::cout << v.front().name << std::endl;
    return 0;
}
