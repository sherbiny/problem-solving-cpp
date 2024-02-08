/// https://codeforces.com/contest/443/problem/A

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    char c;
    unordered_set<char> s;
    while(cin >> c) {
        if (c != '{' && c != ',' && c != '}') s.insert(c);
        else if (c == '}') break;
    }
    cout << s.size();
    return 0;
}