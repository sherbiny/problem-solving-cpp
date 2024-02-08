/// https://codeforces.com/contest/69/problem/A

#include <iostream>

using namespace std;

int main(){
    int n, r = 0, x_t = 0, y_t = 0, z_t = 0, xi, yi, zi;
    cin >> n;
    while(n--) {
        cin >> xi >> yi >> zi;
        x_t += xi;
        y_t += yi;
        z_t += zi;
    }
    if (x_t == 0 && y_t == 0 && z_t == 0) cout << "YES";
    else cout << "NO";
    return 0;
}