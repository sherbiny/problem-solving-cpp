/// http://codeforces.com/contest/9/problem/A

#include <iostream>

using namespace std;

int main() {
    int y, w, n;
    cin >> y >> w;
    n = (6 - max(y, w)) + 1;
    if (n == 2) cout << "1/3";
    else if (n == 3) cout << "1/2";
    else if (n == 4) cout << "2/3";
    else if (n == 0) cout << "0/1";
    else if (n == 6) cout << "1/1";
    else cout << n <<"/" << 6;
    return 0;
}