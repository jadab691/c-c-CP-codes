#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
 
bool isPerSum (ll x){
    ll sr = sqrt(x);
    return ( x == sr*sr) ;
}

int main(){
    int t ; cin>> t;
    while(t--){
       ll n ; cin>>n ;

       vector<ll>v(n) ;
       for(ll i =0 ; i<n ; i++)
           v[i] = n-i ; 
       

       ll sum = 0 ;
       for(ll i= 0 ; i<n ; i++){
        sum += v[i] ;

        if(isPerSum(sum) && i != n-1 ){
            sum =sum - v[i] + v[i+1] ;
            swap(v[i] , v[i+1]) ;
        }

       }
       if(isPerSum(sum)){
            cout<<"-1"<<endl;
        }else{
            for(ll i=0 ; i<n ; i++){
               cout<<" "<<v[i];
        }
        cout<<endl;
       }

        
    }
}