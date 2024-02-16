/// https://codeforces.com/contest/102/problem/B

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, res = 0;
    string s;
    cin >> s;
    while(s.size() > 1) {
        t = 0;
        for (auto i : s) {
            t += i - '0';
        }
        s = to_string(t);
        res++;
    }
    cout << res;
    return 0;
}