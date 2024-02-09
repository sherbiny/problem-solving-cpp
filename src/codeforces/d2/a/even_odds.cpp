/// https://codeforces.com/contest/318/problem/A

#include <iostream>

using namespace std;

typedef unsigned long long int ullint;

int main(){
    ullint n, k;
    cin >> n >> k;
    ullint odd = (n / 2) + (n % 2);
    if (k > odd) cout << (2 * (k - odd));
    else cout << ((2 * (k - 1)) + 1);
    return 0;
}