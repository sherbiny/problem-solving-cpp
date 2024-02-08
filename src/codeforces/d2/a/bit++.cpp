/// https://codeforces.com/contest/282/problem/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 0, n;
    cin >> n;
    string s;
    while(n--) {
        cin >> s;
        if (s[1] == '+') x++;
        else x--;
    }
    cout << x;
    return 0;
}