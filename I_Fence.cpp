#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
int main()
{
    ll n , k ; cin>>n>>k ;

    vector<ll>v(n) ;
    for(ll &x:v) cin>>x ;

    ll sum = 0 , min_idx= 0 ;

    for(ll i=0 ; i<k ; i++){
        sum += v[i] ;
    }

    ll min_sum = sum ;
    
    for(ll i=1 ; i<=n-k ; i++){
        sum = sum - v[i-1] + v[i+k-1] ;
        if(sum < min_sum){
            min_sum = sum ;
            min_idx = i ;
        }
    }

    cout<<min_idx+1<<endl;
    
}