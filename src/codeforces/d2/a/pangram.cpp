/// https://codeforces.com/contest/520/problem/A

#include <iostream>
#include <unordered_set>
#include <cctype>

using namespace std;

int main(){
    int n;
    char c;
    unordered_set<char> s;
    cin >> n;
    if (n < 26) cout << "NO";
    else {
        for (int i = 0; i < n; i++) {
            cin>>c;
            s.insert(tolower(c));
        }
        if (s.size() == 26) cout << "YES";
        else cout << "NO";
    }
    return 0;
}