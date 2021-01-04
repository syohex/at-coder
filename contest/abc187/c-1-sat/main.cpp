#include <iostream>
#include <set>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::set<std::string> nobang;
    std::set<std::string> bang;
    std::string tmp;
    for (int i = 0; i < n; ++i) {
        std::cin >> tmp;
        if (tmp.find('!') == 0) {
            bang.insert(tmp.substr(1));
        } else {
            nobang.insert(tmp);
        }
    }

    for (const auto &t : nobang) {
        if (bang.find(t) != bang.end()) {
            std::cout << t << std::endl;
            return 0;
        }
    }

    std::cout << "satisfiable" << std::endl;
    return 0;
}
