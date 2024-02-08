/// http://codeforces.com/contest/431/problem/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> m(5);
    int x;
    for (int i = 1; i <= 4; i++) {
        cin >> x;
        m[i] = x;
    }
    string s;
    cin >> s;
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        result += m[s[i] - '0'];
    }
    cout << result;
    return 0;
}