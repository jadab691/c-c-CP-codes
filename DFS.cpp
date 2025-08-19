#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

#define mx 110 
vector < int > graph[mx] ;
bool visited[mx] ;

void dfs ( int source )
{
    visited[source] = 1 ;
    for(int i = 0 ; i < graph[source].size() ; i++)
    {
        int next = graph[source][i] ;
        if(visited[next] == 0)
        {
            dfs(next) ;
        }
    }
}




int main()
{
    int node , edge ; cin >> node >> edge ;

    for(int i=1 ; i <= edge ; i++)
    {
        int u , v ; cin >> u >> v ;
        graph[u].push_back(v) ;
        graph[v].push_back(u) ;
    }

    dfs(0) ;
    for(int i=0 ; i < node ; i++)
    {
        if(visited[i] == 1){
            cout << "Node " << i << " is visited" << endl;
        }else{
            cout << "Node " << i << " is not visited" << endl;
        }
    }


    return 0 ;
}