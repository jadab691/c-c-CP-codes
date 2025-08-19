#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> g[N], scc[N];
int Index[N], low[N];
bool in_stack[N];
stack<int> s;
int n, e, t, scc_count;

void tarjan();
void strong_connect(int u);

int main() {
    int i, j;
    while (cin >> n >> e && n + e) {
        // Reset graph and SCCs
        for (int i = 1; i <= n; i++) {
            g[i].clear();
            scc[i - 1].clear();
        }

        // Read edges
        while (e--) {
            cin >> i >> j;
            g[i].push_back(j);
        }

        tarjan();

        // Print SCCs
        for (i = 0; i < scc_count; i++) {
            for (int x : scc[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

void tarjan() {
    memset(Index, -1, sizeof Index);
    memset(low, 0, sizeof low);
    memset(in_stack, false, sizeof in_stack);
    scc_count = 0;
    t = 0;

    while (!s.empty()) s.pop();

    for (int i = 1; i <= n; i++) {
        if (Index[i] == -1) {
            strong_connect(i);
        }
    }
}

void strong_connect(int u) {
    Index[u] = low[u] = ++t;
    s.push(u);
    in_stack[u] = true;

    for (int v : g[u]) {
        if (Index[v] == -1) {
            strong_connect(v);
            low[u] = min(low[u], low[v]);
        } else if (in_stack[v]) {
            low[u] = min(low[u], Index[v]);
        }
    }

    if (Index[u] == low[u]) {
        int v;
        do {
            v = s.top();
            s.pop();
            in_stack[v] = false;
            scc[scc_count].push_back(v);
        } while (v != u);
        scc_count++;
    }
}
