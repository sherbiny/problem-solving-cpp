/// https://codeforces.com/contest/268/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    vector<int> h(n), g(n);
    while (n--) {
        cin >> h[n] >> g[n];
    }
    for (int i: h) {
        for (int j: g) {
            if (i == j) c++;
        }
    }
    cout << c;
    return 0;
}
