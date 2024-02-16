/// https://codeforces.com/contest/227/problem/B

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

typedef unsigned long long int ullint;

int main() {
    int n, m;
    cin >> n;
    int x;
    unordered_map<int, int> mp;
    for (int i = 1; i < n + 1; i++) {
        cin >> x;
        mp[x] = i;
    }
    cin >> m;
    ullint v = 0, p = 0;
    for (int i = 1; i < m + 1; i++) {
        cin >> x;
        v += mp[x];
        p += n - mp[x] + 1;
    }
    cout << v << " " << p;
    return 0;
}