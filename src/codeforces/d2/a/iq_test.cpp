/// https://codeforces.com/contest/287/problem/A

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    vector<vector<char>> arr;
    string s;
    for(int i = 0; i < 4; i++) {
        cin >> s;
        arr.emplace_back(s.begin(), s.end());
    }
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            int black = 0, white = 0;

            for (int k = i; k < i + 2; k++) {
                for (int l = j; l < j + 2; l++) {
                    if (arr[k][l] == '#') black++;
                    else white++;
                }
            }
            if (black == 1 || white == 1 || black == 4 || white == 4) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}