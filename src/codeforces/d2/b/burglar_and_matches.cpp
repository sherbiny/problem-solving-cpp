/// https://codeforces.com/contest/16/problem/B

#include <iostream>
#include <map>

using namespace std;

typedef unsigned long long int ullint;

int main() {
    ullint n;
    int m, a, b;
    cin >> n >> m;
    map<int, ullint, greater<> > mp;
    while(m--) {
        cin >> a >> b;
        mp[b] += a;
    }
    ullint matches = 0;
    for (auto c : mp) {
        if (n == 0) break;
        if (n >= c.second) {
            n -= c.second;
            matches += c.second * c.first;
        } else if (n < c.second) {
            matches += n * c.first;
            n = 0;
        }
    }
    cout << matches;
    return 0;
}