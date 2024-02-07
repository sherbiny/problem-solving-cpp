/// https://codeforces.com/contest/339/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    char x;
    vector<int> arr;
    while(cin >> x) {
        if (x != '+') arr.push_back(x - '0');
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << "+";
    }
    return 0;
}