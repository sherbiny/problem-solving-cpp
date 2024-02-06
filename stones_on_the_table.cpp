#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) c++;
    }
    cout << c;
    return 0;
}