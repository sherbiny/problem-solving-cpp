#include <iostream>

using namespace std;

int main() {

    int n, h, x, c = 0;
    cin >> n >> h;
    while(n--) {
        cin >> x;
        if (x > h) {
            c += 2;
        } else {
            c++;
        }
    }
    cout << c;
    return 0;
}
