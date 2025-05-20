#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long


int main(){
    int t ; cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        vector < ll > v(n) ;
        for(auto &x:v) cin >> x ;

        vector<ll> ans(n) ;

        ll maxval = 0 ;

        for(ll i=0 ; i < n ; i++){
            maxval = max(maxval , v[i]) ;
            ans[i] = maxval ;
        }

        reverse(v.begin() , v.end()) ;
        reverse(ans.begin() , ans.end());

        for(ll i=1 ; i < n ; i++){
            v[i] += v[i-1] ;
        }

        cout << ans[0] <<" " ;

        for(ll i=0 ; i < n-1 ; i++){
            cout << v[i] + ans[i+1]<<" ";
        }
    }
    return 0 ;
}