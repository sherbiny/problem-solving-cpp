/// https://codeforces.com/contest/289/problem/A

#include <iostream>

using namespace std;

int main(){
    int n, k, t = 0, l, r;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        t += r - l + 1;
    }
    int res;
    for (int i = 0;; i++) {
        res = (k * i) - t;
        if (res >= 0) {
            cout << res;
            break;
        }
    }
    return 0;
}