/// https://codeforces.com/contest/474/problem/A

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> kb(3);
    kb[0] = "qwertyuiop";
    kb[1] = "asdfghjkl;";
    kb[2] = "zxcvbnm,./";

    unordered_map<char, char> r, l;
    for (auto s : kb) {
        for (int i = s.size() - 1; i > 0; i--) {
            r.emplace(s[i], s[i - 1]);
        }
        for (int i = 0; i < s.size() - 1; i++) {
            l.emplace(s[i], s[i + 1]);
        }
    }
    char key;
    string input, output;
    cin >> key >> input;
    for (char c : input) {
        if (key == 'R') output.push_back(r[c]);
        else output.push_back(l[c]);
    }
    cout << output;
    return 0;
}