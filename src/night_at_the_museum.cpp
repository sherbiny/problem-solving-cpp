#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s;
    cin >> s;
    char p = 'a';
    int d1, d2;
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        d1 = abs(s[i] - p);
        d2 = 26 - d1;
        result += min(d1, d2);
        p = s[i];
    }
    cout << result;
    return 0;
}