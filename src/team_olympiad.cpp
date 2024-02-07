/// https://codeforces.com/contest/490/problem/A

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    int n, x, w;
    cin >> n;
    vector<deque<int>> v(3);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v[x - 1].push_back(i);
    }
    w = min(v[0].size(), min(v[1].size(), v[2].size()));
    cout << w;
    if (w > 0) cout << endl;
    for (int i = 0; i < w; i++) {
        cout << v[0].front() << " " << v[1].front() << " " << v[2].front();
        v[0].pop_front();
        v[1].pop_front();
        v[2].pop_front();
        if (i < w - 1) cout << endl;
    }
    return 0;
}