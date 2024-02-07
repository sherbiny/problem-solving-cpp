/// https://codeforces.com/problemset/problem/767/A

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, x;
    priority_queue<int> pq;
    cin >> n;
    while(n){
        cin >> x;
        if (x == n) {
            cout << x << " ";
            n--;
            while(!pq.empty() && pq.top() == n) {
                cout << pq.top() << " ";
                pq.pop();
                n--;
            }
            if (n >= 1) cout << "\n";
        } else {
            pq.push(x);
            cout << "\n";
        }
    }
    return 0;
}