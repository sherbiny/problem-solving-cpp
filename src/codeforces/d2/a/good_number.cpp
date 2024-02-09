/// https://codeforces.com/contest/365/problem/A

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
    int n, k, c = 0;
    string s;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> s;
        unordered_set<int> u;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] - '0' <= k) {
                u.insert(s[j] - '0');
            }
        }
        if (u.size() != k + 1) c++;
    }
    cout << n - c;
    return 0;
}