#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    int n ,m ; cin>>n>>m ;

    vector<int>v(n) ;
    for(int &y:v) cin>>y ;

    unordered_set<int>s ;
    vector<int>vec(n) ;

    for(int i=n-1 ; i>=0 ; i--){
        s.insert(v[i]) ;
        vec[i] = s.size();
    }

    while(m--){
        int x ; cin>>x ;
        cout<<vec[x-1]<<endl;
    }
}