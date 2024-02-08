/// https://codeforces.com/contest/136/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector<int> v(n + 10);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v[x] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << v[i];
        if (i < n) cout << " ";
    }
    return 0;
}