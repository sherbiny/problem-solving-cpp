/// https://codeforces.com/contest/699/problem/A

#include <iostream>
#include <vector>
#include <string>

typedef unsigned int uint;
typedef long long int llint;

using namespace std;

int main() {
    uint n;
    llint x;
    string direction;
    vector<llint> left;
    vector<llint> right;
    cin >> n;
    cin >> direction;
    for (uint i = 0; i < n; i++) {
        cin >> x;
        if (direction[i] == 'R') right.push_back(x);
        else left.push_back(x);
    }
    llint mx = numeric_limits<llint>::max();
    llint result = mx;
    for (auto r : right) {
        int lo = 0, hi = left.size() - 1, mid, closest = -1;
        while(lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (left[mid] > r) {
                result = min(result, (left[mid] - r) / 2);
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
    }
    if (result == mx) cout << -1;
    else cout << result;
    return 0;
}