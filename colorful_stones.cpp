/// https://codeforces.com/contest/265/problem/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int l = 0;
    string s1, s2;
    cin >> s1 >> s2;
    for (char i : s2) {
        if (i == s1[l]) {
            l++;
        }
    }
    cout << l + 1;
    return 0;
}