#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

int main()
{
    int vertices, edges;
    cout << "Enter number of vertices & number of edges: \n";
    cin >> vertices >> edges;

    int count = 0;
    vector<vector<int>> adj(vertices);
    vector<int> indeg(vertices, 0);

    cout << "Enter the main graph (u v): \n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); 
        indeg[v]++;
    }

    queue<int> q;
    for (int i = 0; i < vertices; i++) {
        if (indeg[i] == 0) {
            q.push(i);
        }
    }

    cout << "Topological Order: ";
    while (!q.empty()) {
        count++;
        int x = q.front();
        q.pop();
        cout << x << " ";

        for (auto it : adj[x]) {
            indeg[it]--;
            if (indeg[it] == 0) {
                q.push(it);
            }
        }
    }

    if (count != vertices)
        cout << "\nThe graph contains a cycle.\n";
    else
        cout << "\nTopological sorting completed successfully.\n";

    return 0;
}
