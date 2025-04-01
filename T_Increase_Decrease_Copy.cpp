#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool inIt(int a , int b , int c){
    if(c>=a && c<=b){
        return true ;
    }else if(c>=b && c<=a){
        return true ;
    }else{
        return false ; 
    }
}

int close(int o , int p){
    return abs(o-p) ;     
}



int main() { 
    ll t ; cin>>t ;

    while(t--){

        ll n ; cin>>n ;
        vector<ll>v(n) , v1(n+1) ;

        for(ll &x:v) cin>>x ; 
        for(ll &x:v1) cin>>x ;

        ll count = 0 ;
        ll move = 0 ;

        for(ll i=0 ; i<n ; i++){
            move += abs(v[i]-v1[i]) ;
        }
        move++ ;


        ll small = 1e9;
                       
        for(ll i=0 ; i< n ; i++){

           

            ll x = min(v[i] , v1[i]) ;
            ll y = max(v[i] , v1[i]) ;

            if(v1[n] >= x && v1[n] <= y){
                small = 0 ;
            }else{
                 small = min(small , min((abs(v1[n] - v[i])) , abs(v1[n] - v1[i]))) ;
            }
                
        }
        move += small ;

        cout<<move<<endl ;
    }
}
