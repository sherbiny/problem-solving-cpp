/// https://codeforces.com/contest/263/problem/A

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, r;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x;
            if (x == 1) {
                r = abs(i - 2) + abs (j - 2);
            }
        }
    }
    cout << r;
    return 0;
}