#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>

int main() {
    struct Data {
        int id;
        std::vector<int> scores;
    };

    int n, x, y, z;
    std::cin >> n >> x >> y >> z;

    std::vector<std::vector<int>> scores(n, std::vector<int>(2, 0));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            int tmp;
            std::cin >> tmp;
            scores[j][i] = tmp;
        }
    }

    const auto cmp_math = [](const Data &a, const Data &b) {
        if (a.scores[0] == b.scores[0]) {
            return a.id > b.id;
        }
        return a.scores[0] < b.scores[0];
    };
    std::priority_queue<Data, std::vector<Data>, decltype(cmp_math)> q_math(cmp_math);
    for (int i = 0; i < n; ++i) {
        q_math.push(Data{i + 1, scores[i]});
    }

    std::set<int> passed;
    for (int i = 0; i < x; ++i) {
        auto d = q_math.top();
        q_math.pop();
        passed.insert(d.id);
    }

    const auto cmp_english = [](const Data &a, const Data &b) {
        if (a.scores[1] == b.scores[1]) {
            return a.id > b.id;
        }
        return a.scores[1] < b.scores[1];
    };
    std::priority_queue<Data, std::vector<Data>, decltype(cmp_english)> q_english(cmp_english);
    while (!q_math.empty()) {
        q_english.push(q_math.top());
        q_math.pop();
    }

    for (int i = 0; i < y; ++i) {
        auto d = q_english.top();
        q_english.pop();
        passed.insert(d.id);
    }

    const auto cmp_sum = [](const Data &a, const Data &b) {
        int sum1 = a.scores[0] + a.scores[1];
        int sum2 = b.scores[0] + b.scores[1];
        if (sum1 == sum2) {
            return a.id > b.id;
        }
        return sum1 < sum2;
    };
    std::priority_queue<Data, std::vector<Data>, decltype(cmp_sum)> q_sum(cmp_sum);
    while (!q_english.empty()) {
        q_sum.push(q_english.top());
        q_english.pop();
    }

    for (int i = 0; i < z; ++i) {
        auto d = q_sum.top();
        q_sum.pop();
        passed.insert(d.id);
    }

    for (int id : passed) {
        std::cout << id << std::endl;
    }

    return 0;
}
