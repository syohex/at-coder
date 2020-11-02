#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;

    long sum = 0;
    for (const char c : n) {
        sum += c - '0';
    }

    std::cout << (sum % 9 == 0 ? "Yes" : "No") << std::endl;
    return 0;
}
