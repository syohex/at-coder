#include <iostream>
#include <set>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;

    int i = 1;
    std::set<int> s;
    while (true) {
        int v = i * i;
        if (v > 100100) {
            break;
        }

        s.insert(v);
        ++i;
    }

    int n = std::stoi(std::to_string(a) + std::to_string(b));
    std::cout << (s.find(n) != s.end() ? "Yes" : "No") << std::endl;
    return 0;
}
