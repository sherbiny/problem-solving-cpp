/// https://codeforces.com/contest/225/problem/A

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int n, top, left, right;
    cin >> n;
    cin >> top;
    cin >> left >> right;
    unordered_set<int> s;
    s.insert(left);
    s.insert(7 - left);
    s.insert(right);
    s.insert(7 - right);
    n--;
    while(n--){
        unordered_set<int> s2;
        cin >> left >> right;
        s2.insert(left);
        s2.insert(7 - left);
        s2.insert(right);
        s2.insert(7 - right);
        if (s2 != s) {
            cout << "NO";
            return 0;
        } else {
            s = s2;
        }
    }
    cout << "YES";
    return 0;
}