/// http://codeforces.com/contest/734/problem/A

#include <iostream>

using namespace std;

int main() {
    int n, x = 0;
    char c;
    cin >> n;
    while(n--){
        cin >> c;
        if (c == 'A') {
            x++;
        } else x--;
    }
    if (x > 0) {
        cout << "Anton";
    } else if (x < 0){
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    return 0;
}