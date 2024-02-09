/// https://codeforces.com/contest/682/problem/A

#include <iostream>
#include <unordered_map>

using namespace std;

typedef unsigned long long int ullint;

int main() {
    ullint n, m, c = 0;
    unordered_map<ullint, ullint> mp;
    cin >> n >> m;
    for (ullint i = 1; i <= 5; i++) {
        for (ullint j = 5 - i; j <= m; j += 5) {
            if (j != 0) mp[i]++;
        }
    }
    for (ullint i = 0; i < n; i++) {
        c += mp[(i % 5) + 1];
    }
    cout << c;
    return 0;
}