/// https://codeforces.com/contest/71/problem/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] ;
        } else cout << s;
        if (n > 0) cout << "\n";
    }
    return 0;
}