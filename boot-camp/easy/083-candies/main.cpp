#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> v(2, std::vector<int>(n));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> v[i][j];
        }
    }

    std::vector<std::vector<int>> dp(2, std::vector<int>(n, 0));
    dp[0][0] = v[0][0];

    std::stack<std::vector<int>> st;
    st.push({0, 0});

    while (!st.empty()) {
        auto &point = st.top();
        int x = point[0];
        int y = point[1];
        st.pop();

        if (x == 1 && y == n - 1) {
            continue;
        }

        if (x != 1) {
            st.push({x + 1, y});
            dp[x + 1][y] = std::max(dp[x + 1][y], dp[x][y] + v[x + 1][y]);
        }
        if (y != n - 1) {
            st.push({x, y + 1});
            dp[x][y + 1] = std::max(dp[x][y + 1], dp[x][y] + v[x][y + 1]);
        }
    }

    std::cout << dp[1][n - 1] << std::endl;
    return 0;
}
