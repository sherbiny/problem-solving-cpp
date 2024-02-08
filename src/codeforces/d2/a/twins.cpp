/// https://codeforces.com/contest/160/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, a, r = 0, t1 = 0, t2 = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> a;
        arr[i] = a;
        t1 += a;
    }
    sort(arr.begin(), arr.end());
    for (int i = n - 1; i >= 0; i--) {
        t1 -= arr[i];
        t2 += arr[i];
        r++;
        if (t2 > t1) break;
    }
    cout << r;
    return 0;
}