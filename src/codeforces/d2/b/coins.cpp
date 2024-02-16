/// https://codeforces.com/contest/47/problem/B

#include <iostream>
#include <map>
#include <string>
#include <set>
#include <unordered_map>
#include <stack>
#include <unordered_set>
#include <vector>

using namespace std;

void dfs(char source, unordered_map<char, string> &g, stack<char> &topological_order,
         unordered_set<char> &visited) {
    visited.insert(source);
    for (auto c: g[source]) {
        if (visited.find(c) == visited.end()) {
            dfs(c, g, topological_order, visited);
        }
    }
    topological_order.push(source);
}

int main() {

    unordered_map<char, string> g;
    stack<char> order;
    unordered_set<char> visited;
    string res, s;
    while (cin >> s) {
        if (s[1] == '<') {
            g[s[0]].push_back(s[2]);
            if(g.find(s[2]) == g.end()) {
                g[s[2]] = string();
            }
        }
        else {
            g[s[2]].push_back(s[0]);
            if(g.find(s[0]) == g.end()) {
                g[s[0]] = string();
            };
        }
    }
    for (const auto &p: g) {
        if (visited.find(p.first) == visited.end()) {
            dfs(p.first, g, order, visited);
        }
    }
    int i = 0;
    unordered_map<char, int> pos;
    while (!order.empty()) {
        pos[order.top()] = i;
        res.push_back(order.top());
        order.pop();
        i++;
    }
    for (auto x: res) {
        for (auto y: g[x]) {
            if (pos[x] > pos[y]) {
                cout << "Impossible";
                return 0;
            }
        }
    }
    cout << res;
    return 0;
}