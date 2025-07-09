#include <iostream>
#include <queue>

using namespace std;

int main() {
    int queries;
    cin >> queries;

    deque<pair<int64_t, int64_t>> q;
    for (int i = 0; i < queries; ++i) {
        int type;
        cin >> type;
        if (type == 1) {
            int64_t c;
            int64_t x;
            cin >> c >> x;
            q.push_back({c, x});
        } else {
            int64_t k;
            cin >> k;

            int64_t sum = 0;
            while (true) {
                auto [c, x] = q.front();
                q.pop_front();

                if (c >= k) {
                    sum += x * k;
                    if (c != k) {
                        q.push_front({c - k, x});
                    }
                    break;
                }

                sum += x * c;
                k -= c;
            }

            std::cout << sum << std::endl;
        }
    }

    return 0;
}
