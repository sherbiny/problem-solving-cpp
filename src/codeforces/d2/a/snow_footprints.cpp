/// https://codeforces.com/contest/298/problem/A

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    char f_d, l_d;
    int f_i, l_i;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            cout << i + 1 << " ";
            int ii = i + 1;
            while (ii < n) {
                if (s[ii] == 'L') {
                    cout << ii - 1 + 1;
                    return 0;
                } else if (s[ii] == '.') {
                    cout << ii + 1;
                    return 0;
                }
                ii++;
            }
        } else if (s[i] == 'L') {
            int ii = i + 1;
            while(ii < n) {
                if (s[ii] == '.') {
                    cout << ii - 1 + 1 << " " << i - 1 + 1;
                    return 0;
                }
                ii++;
            }
        }
    }
    return 0;
}