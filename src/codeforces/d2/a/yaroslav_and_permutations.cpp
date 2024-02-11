/// https://codeforces.com/contest/296/problem/A

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, x;
    unordered_map<int, int> freq;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        freq[x]++;
    }
    for (auto& f : freq) {
        if (f.second > (n + 1) / 2) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}