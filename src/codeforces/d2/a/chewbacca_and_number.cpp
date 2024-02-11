/// https://codeforces.com/contest/514/problem/A

#include <iostream>
#include <string>

using namespace std;

typedef unsigned long long int ullint;

int main() {
    string s;
    cin >> s;
    int start = 0;
    if (s[start] == '9') start++;
    for (int i = s.size(); i >= start; i--) {
        if ((s[i] - '0') >= 5){
            s[i] = (9 - (s[i] - '0')) + '0';
        }
    }
    cout << stoll(s);
    return 0;
}