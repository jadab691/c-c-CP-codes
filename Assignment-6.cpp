#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

int n , k , a , b  , d ;
vector < vector<int> > graph ;
int ans = 0 ;


void dfs (int ami , int days , vector<bool>& visited)
{
    if(days > d){
        return ;
    }
    if(ami == b  && days <= d) {
        ans++ ;
        return ;
    }

    for(int i : graph[ami]) {
        if( !visited[i]){
            dfs( i  , days + 1  , visited ) ;
        }
    }
}



int main()
{
    cin >> n >> k >> a >> b >> d ;

    graph.resize(n+1) ;

    for(int i=0 ; i < k ; i++){
        int u , v  ;  cin >> u >> v ;
        graph[u].push_back(v);
    }

    vector<bool> visited(n+1 , false);
    visited[a] = true ;
    dfs(a , 0  , visited) ;

    cout << ans << endl;
    

    return 0 ;
}