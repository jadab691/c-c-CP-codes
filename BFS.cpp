#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

#define mx 110 
vector < int > graph [mx];
bool vis[mx] ;
int dis[mx] ;

void bfs(int  source)
{
    queue < int > q ;
    //intitialization 
    vis[source] = 1;
    dis[source] = 0 ;
    q.push(source) ;

    while(!q.empty())
    {
        int currNode = q.front() ;
        q.pop() ;
        for(int i=0 ; i < graph[currNode].size() ; i++){
            int next = graph[currNode][i] ;
            if(vis[next] == 0)
            {
                vis[next] = 1 ; //visite
                dis[next] = dis[currNode] + 1; //update
                q.push(next) ; //push to queue
            }
        }
    }
}




int main()
{
    int node , edge ; cin >> node >>  edge ;

    for(int i=1 ; i <= edge ; i++){
        int u , v ; cin >> u >> v  ;
        graph[u].push_back(v) ;
        graph[v].push_back(u);
    }


    int source ; cin >> source ;
    bfs(source) ;

    cout << "From node " << source << endl;
    for(int i=1 ; i <= node ; i++)
    {
        cout << "Distance of " << i << " is : " << dis[i] << endl;
    }

    return 0 ;
}