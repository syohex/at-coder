#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a > b) {
	    std::swap(a, b);
    }

    int count = 0;
    while (b - a >= 10) {
        a += 10;
        ++count;
	
	if (a > b) {
		std::swap(a, b);
	}
    }

    switch (b - a) {
    case 9:
    case 6:
    case 4:
    case 2:
        count += 2;
        break;
    case 8:
    case 7:
    case 3:
        count += 3;
        break;
    case 5:
    case 1:
        count += 1;
        break;
    default:
        break;
    }

    std::cout << count << std::endl;
    return 0;
}
