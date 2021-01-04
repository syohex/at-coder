#include <iostream>

int SumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void Solve(int a, int b) {
    int sum_a = SumDigits(a);
    int sum_b = SumDigits(b);

    std::cout << (sum_a > sum_b ? sum_a : sum_b) << std::endl;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    Solve(a, b);
    return 0;
}
