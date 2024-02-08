/// https://codeforces.com/contest/158/problem/A

#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int uint;

int main() {
    uint n, k, x, c = 0;
    cin >> n >> k;
    vector<uint> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        arr[i] = x;
    }
    for (auto i : arr) {
        if (i >= arr[k] && i > 0) c++;
    }
    cout << c;
    return 0;
}