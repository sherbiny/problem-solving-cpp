/// https://codeforces.com/contest/746/problem/B

#include <iostream>
#include <string>

using namespace std;

int main(){
    string encoded, decoded;
    int n;
    cin >> n >> encoded;
    while(!encoded.empty()) {
        decoded.insert(decoded.begin() + (decoded.size() / 2), encoded.back());
        encoded.pop_back();
    }
    cout << decoded << endl;
    return 0;
}