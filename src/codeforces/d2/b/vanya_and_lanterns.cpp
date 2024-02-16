/// https://codeforces.com/contest/492/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

typedef unsigned long long int ullint;
typedef long double ld;

int main() {

    ld epsilon = 1e-16;
    ld n, l, x;
    vector<ld> arr;
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    ld distance_from_start = arr[0] - 0;
    ld distance_to_end = l - arr[arr.size() - 1];
    ld res = distance_from_start > distance_to_end ? distance_from_start : distance_to_end;
    res *= 2;
    for (int i = arr.size() - 1; i >= 1; i--) {
        x = (arr[i] - arr[i - 1]);
        if (x - epsilon > res) res = x;
    }
    cout << fixed <<setprecision(10) << res / 2.0 << setw(10) << setfill('0');
    return 0;
}