#include <bits/stdc++.h>
using namespace std;

const int MAXN = 205;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        long long x, y;
        cin >> a >> b >> x >> y;

        // Dijkstra's algorithm setup
        vector<long long> dist(MAXN, LLONG_MAX);
        priority_queue< pair<long long, int>, vector< pair<long long, int> >, greater< pair<long long, int> > > pq;

        dist[a] = 0;
        pq.push(make_pair(0, a));

        while (!pq.empty()) {
            pair<long long, int> p = pq.top();
            pq.pop();
            long long cost = p.first;
            int curr = p.second;

            // Early stopping if we've reached target
            if (curr == b) {
                cout << cost << '\n';
                break;
            }

            // Try a + 1 operation
            if (curr + 1 < MAXN && dist[curr + 1] > cost + x) {
                dist[curr + 1] = cost + x;
                pq.push(make_pair(dist[curr + 1], curr + 1));
            }

            // Try a ^ 1 operation
            int xor1 = curr ^ 1;
            if (xor1 < MAXN && dist[xor1] > cost + y) {
                dist[xor1] = cost + y;
                pq.push(make_pair(dist[xor1], xor1));
            }
        }

        if (dist[b] == LLONG_MAX)
            cout << -1 << '\n';
    }
    return 0;
}
