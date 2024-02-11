/// https://codeforces.com/contest/680/problem/B

#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

int main(){
    int n, x, a;
    cin >> n >> a;
    vector<int> arr(n + 1);
    map<int, int> criminals, cities;
    cities[0] = 1;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        arr[i] = x;
    }
    for (int i = 1; i <= n; i++) {
        criminals[abs(i - a)] += arr[i];
        if (i != a) {
            cities[abs(i - a)]++;
        }
    }
    int res = 0;
    for (int i = 0; i < cities.size(); i++) {
        if (cities[i] == criminals[i]) {
            res += criminals[i];
        }
    }
    cout << res;
    return 0;
}