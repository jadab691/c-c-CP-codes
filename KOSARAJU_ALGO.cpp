#include <bits/stdc++.h>
using namespace std;

void dfs(int node, stack<int> &st, vector<int> &vis, vector<vector<int>> &adj) {
    vis[node] = 1;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfs(it, st, vis, adj);
        }
    }
    st.push(node); // finished this node
}

void revDfs(int node, vector<int> &vis, vector<vector<int>> &transpose) {
    vis[node] = 1;
    for (auto it : transpose[node]) {
        if (!vis[it]) {
            revDfs(it, vis, transpose);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // directed edge
    }

    vector<int> vis(n, 0);
    stack<int> st;

    // Step 1: Order nodes by finishing time
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, st, vis, adj);
        }
    }

    // Step 2: Transpose the graph
    vector<vector<int>> transpose(n);
    for (int i = 0; i < n; i++) {
        for (auto it : adj[i]) {
            transpose[it].push_back(i);
        }
    }

    // Step 3: DFS in transpose graph in order of finishing times
    fill(vis.begin(), vis.end(), 0);
    int scc_count = 0;

    while (!st.empty()) {
        int node = st.top();
        st.pop();
        if (!vis[node]) {
            revDfs(node, vis, transpose);
            scc_count++;
        }
    }

    cout << "Number of Strongly Connected Components: " << scc_count << endl;

    return 0;
}
