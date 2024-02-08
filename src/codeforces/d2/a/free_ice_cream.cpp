/// https://codeforces.com/contest/686/problem/A

#include <iostream>

using namespace std;

int main() {
    long long n, x, c = 0, v;
    char sign;
    cin >> n >> x;
    while(n--) {
        cin >> sign >> v;
        if (sign == '+') x += v;
        else {
            if (x >= v) {
                x -= v;
            } else {
                c++;
                continue;
            }
        }
    }
    cout << x << " " << c;
    return 0;
}