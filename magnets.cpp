#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, c = 1;
    string s1, s2;
    cin >> n;
    cin >> s1;
    while(--n) {
        cin >> s2;
        if (s2[0] == s1[1]) {
            c++;
            s1 = s2;
        }
    }
    cout << c;
    return 0;
}