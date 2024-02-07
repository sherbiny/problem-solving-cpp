/// https://codeforces.com/contest/799/problem/A

#include <iostream>

using namespace std;

int main() {
    int rc, tpb, bs, ttb, rb, tso, hsb, remb, tbo;
    cin >> rc >> tpb >> bs >> ttb;

    rb = (rc + bs - 1) / bs;
    tso = rb * tpb;
    hsb = (ttb + tpb - 1) / tpb;
    remb = rb - hsb;

    if (tso <= ttb || remb == 0) {
        cout << "NO";
        return 0;
    }

    tbo = ttb + ((remb / 2) * tpb) + ((remb % 2) * tpb);

    if (tbo < tso) cout << "YES";
    else cout << "NO";

    return 0;
}