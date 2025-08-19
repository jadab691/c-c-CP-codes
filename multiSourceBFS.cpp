#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

#define mx 110 
vector < int > graph [mx];
bool mark[mx] ;
bool vis[mx] ;
int dis[mx] ;

void bfs( vector < int > sources)
{
    queue < int > q ;
    //intitialization 
    for(int i=0 ; i < sources.size() ; i++)
    {
        int source = sources[i] ;
        vis[source] = 1;
        dis[source] = 0 ;
        q.push(source) ;
    }
    

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

    int numOfSources ; 
    cin >> numOfSources ;

    vector < int > sources ;
    for(int i=0 ; i < numOfSources ; i++)
    {
        int source ; cin >> source ;
        mark[source] = 1 ;
        sources.push_back(source) ;
    }
    


    // int source ; cin >> source ;
    bfs(sources) ;

    // cout << "From node " << source << endl;
    for(int i=1 ; i <= node ; i++)
    {
        if(mark [i] == true) continue ;
        cout << "Distance of " << i << " is : " << dis[i] << endl;
    }

    return 0 ;
}