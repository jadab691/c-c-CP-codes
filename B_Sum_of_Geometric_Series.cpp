#include<bits/stdc++.h>
using namespace std ;
#include<list>
#include<cmath>
#define f first
#define s second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long

int main()
{
    ll n, m ; cin>>n>>m ;

    ll sum = 0 ;
    ll nPowi = 1 ;

    for(ll i=0 ; i<=m ; i++){

        sum += nPowi ;
        if(sum > 1000000000){
            cout<<"inf"<<endl;
            return 0 ;
        }
        nPowi *= n ;
    }

    
    cout<<sum<<endl;
    return 0 ;
}