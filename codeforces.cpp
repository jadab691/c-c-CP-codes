#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    vector<int> v[10]; // Array of vectors to store adjacency list
    for(int i = 1; i <= 3; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x); // For undirected graph
    }

    // Print adjacency list
    for(int i = 0; i < 10; i++) {
        cout << "Node " << i << ": ";
        for(int neighbor : v[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}