#include <iostream>
#include <cmath>

int main() {
    long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    long ret;
    if (a < 0 && b < 0) {
        if (c < 0 && d < 0) {
            ret = a * c;
        } else if (c < 0 && d >= 0) {
            ret = a * c;
        } else {
            ret = b * c;
        }
    } else if (a < 0 && b >= 0) {
        if (c < 0 && d < 0) {
            ret = a * c;
        } else if (c < 0 && d >= 0) {
            if (a * c > b * d) {
                ret = a * c;
            } else {
                ret = b * d;
            }
        } else {
            ret = b * d;
        }
    } else {
        if (c < 0 && d < 0) {
            ret = a * d;
        } else if (c < 0 && d >= 0) {
            ret = b * d;
        } else {
            ret = b * d;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
