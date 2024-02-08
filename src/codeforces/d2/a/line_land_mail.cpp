/// https://codeforces.com/contest/567/problem/A

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, x, mind, maxd;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x;
    }
    int left, right, first, last;
    cout << abs(arr[0] - arr[1]) << " " << abs(arr[0] - arr[n - 1]) << endl;
    for (int i = 1; i < n - 1; i++) {
        left = abs(arr[i] - arr[i - 1]);
        right = abs(arr[i] - arr[i + 1]);
        first = abs(arr[i] - arr[0]);
        last = abs(arr[i] - arr[n - 1]);
        cout <<  min(left, right) << " " << max(first, last) << endl;
    }
    cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[n - 1] - arr[0]);
    return 0;
}