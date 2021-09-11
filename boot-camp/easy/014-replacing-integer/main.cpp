#include <iostream>
#include <cstdint>
#include <algorithm>
#include <set>

int main() {
    std::uint64_t n, k;
    std::cin >> n >> k;

    if (n > k) {
    	n %= k;
    }

    std::set<long> checked;
    std::uint64_t ret = n;
    while (ret != 0) {
    	std::uint64_t diff;
        if (n > k) {
            diff = n - k;
        } else {
            diff = k - n;
        }

        if (checked.find(diff) != checked.end()) {
            break;
        }

        checked.insert(diff);
        ret = std::min(ret, diff);
	n = diff;
    }

    std::cout << ret << std::endl;
    return 0;
}
