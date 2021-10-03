#include <iostream>

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;

    // 90 degree rotate
    int tmp = dx;
    dx = -dy;
    dy = tmp;

    int x3 = x2 + dx;
    int y3 = y2 + dy;

    // 90 degree rotate
    tmp = dx;
    dx = -dy;
    dy = tmp;

    int x4 = x3 + dx;
    int y4 = y3 + dy;

    printf("%d %d %d %d\n", x3, y3, x4, y4);
    return 0;
}
