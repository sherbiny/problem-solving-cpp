/// http://codeforces.com/contest/709/problem/A

#include <iostream>

using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;
    int c = 0, t = 0, o;
    while(n--) {
        cin >> o;
        if (o > b) continue;
        t += o;
        if (t > d) {
            c++;
            t = 0;
        }
    }
    cout << c;
    return 0;
}