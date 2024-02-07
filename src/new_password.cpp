/// https://codeforces.com/contest/770/problem/A

#include <iostream>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    for (int i = 0, j = 0; j < n; j++, i++){
        cout << char((i % k) + 'a');
    }
    return 0;
}