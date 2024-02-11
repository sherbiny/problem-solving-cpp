/// https://codeforces.com/contest/382/problem/A

#include <iostream>
#include <string>
#include <tuple>

using namespace std;

pair<string, string> split_string(string& input, char delimiter) {
    pair<string, string> result;
    size_t delimiterPos = input.find(delimiter);
    result.first = input.substr(0, delimiterPos);
    result.second = input.substr(delimiterPos + 1);
    return result;
}

int main(){
    char c;
    string original, left, right, rem;
    cin >> original;
    auto p = split_string(original, '|');
    left = p.first;
    right = p.second;
    cin >> rem;
    while (left.size() < right.size() && !rem.empty()) {
        left.push_back(rem.back());
        rem.pop_back();
    }
    while (right.size() < left.size() && !rem.empty()) {
        right.push_back(rem.back());
        rem.pop_back();
    }
    if (right.size() != left.size()) {
        cout << "Impossible";
        return 0;

    } else {
        if (rem.size() % 2 != 0) {
            cout << "Impossible";
            return 0;

        } else {
            for (int i = 0; i < rem.size(); i++) {
                if (i % 2 == 0) {
                    left.push_back(rem[i]);
                } else {
                    right.push_back(rem[i]);
                }
            }
        }
    }
    cout << left << "|" << right;
    return 0;
}