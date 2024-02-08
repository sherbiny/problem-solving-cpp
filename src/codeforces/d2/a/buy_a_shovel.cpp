/// https://codeforces.com/contest/732/problem/A

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, r, x, a = 1;
    cin >> k >> r;
    while(true) {
        if ((k * a) % 10 == r || (k * a) % 10 == 0) {
            cout << a;
            break;
        }
        a++;
    }
    return 0;
}