#include <iostream>

using namespace std;

int main(){
    int n, x, y, z, t, c = 0;
    cin >> n;
    while(n--) {
        cin >> x >> y >> z;
        t = x + y + z;
        if (t >= 2) c++;
    }
    cout << c;
    return 0;
}