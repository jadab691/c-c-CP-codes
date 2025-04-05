#include<bits/stdc++.h>
using namespace std ;
#include<list>
#define ll long long
#define f first
#define s second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

//nCr
ll nCr (ll a , ll b){
    if(b == 0) return  1 ;
    else if( b == 1) return a ;
    else if ( a == b) return 1 ;
    else if(a-b == 1) return a;
    else if(b>a) return 0 ;
    else {
        if((a/2) < b){
            b = a-b ;
        }
        ll finA = 1 ;
        ll finB = 1 ;
        for(ll i=1 ; i<=b ; i++){
            finA *= a ;
            a-- ;
            finB *= i ;
        }
        return finA/finB ;
    }
//dunier sohoz nCr logic , made by Lal .
}

ll fact(ll x){
    // 5 4 3 2 1 or 1 2 3 4 5 
    if (x==0) return 1 ;

    ll res = 1;
    for(ll i=1 ; i <= x ; i++){
        res *= i ;
    }
    return res ;
}


int main() {
   int t ; cin>>t ;
   for(int p = 1 ; p<=t; p++){

    ll n , k ; cin>>n>>k ;

    ll Lal = (nCr(n,k))*(nCr(n,k))*(fact(k)) ;


    cout << "Case " <<p<< ": " <<Lal<< endl;
   }
}
