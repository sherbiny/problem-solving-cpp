#include <iostream>

using namespace std;

int main() {
    int n, x, r = 0, c = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x < 0) {
            if (r == 0) c++;
            else r--;
        } else r += x;
    }
    cout << c;
    return 0;
}