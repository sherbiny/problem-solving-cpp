/// https://codeforces.com/contest/768/problem/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef unsigned long long int ullint;
typedef unsigned int uint;

int main () {
    uint n;
    ullint x;
    ullint min_n = numeric_limits<ullint>::max();
    ullint max_n = numeric_limits<ullint>::min();
    vector<ullint> arr;
    uint c = 0;

    cin >> n;
    for (uint i = 0; i < n; i++) {
        cin >> x;
        min_n = min(min_n, x);
        max_n = max(max_n, x);
        arr.push_back(x);
    }
    for (auto i : arr) {
        if (i > min_n && i < max_n) {
            c++;
        }
    }
    cout << c;
    return 0;
}