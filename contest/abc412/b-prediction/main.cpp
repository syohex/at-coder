#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    set<char> t_chars;
    for (char c : t) {
        t_chars.insert(c);
    }

    for (size_t i = 1; i < s.size(); ++i) {
        if (isupper(static_cast<int>(s[i]))) {
            if (!t_chars.contains(s[i - 1])) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
