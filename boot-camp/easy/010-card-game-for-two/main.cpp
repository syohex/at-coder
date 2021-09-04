#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int alice = 0;
    int bob = 0;
    bool turn = true;

    for (int i = n - 1; i >= 0; --i) {
        if (turn) {
            alice += v[i];
        } else {
            bob += v[i];
        }
        turn = !turn;
    }

    std::cout << (alice - bob) << std::endl;
    return 0;
}
