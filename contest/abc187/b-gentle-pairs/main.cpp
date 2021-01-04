#include <iostream>
#include <vector>
#include <cmath>

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    int ret = 0;
    for (size_t i = 0; i < points.size() - 1; ++i) {
        for (size_t j = i + 1; j < points.size(); ++j) {
            if (points[i].x == points[j].x) {
                continue;
            }

            double v;
            if (points[i].x < points[j].x) {
                v = (points[j].y - points[i].y) / static_cast<double>(points[j].x - points[i].x);
            } else {
                v = (points[i].y - points[j].y) / static_cast<double>(points[i].x - points[j].x);
            }

            if (v >= -1.0 && v <= 1.0) {
                ++ret;
            }
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
