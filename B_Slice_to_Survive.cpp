#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long



int main() {

    ll n ; cin >> n ;

    vector<vector<ll>> v(n, vector<ll>(n));

    ll sum = (n*(n+1))/2 ;

    ll mid_elmt = (n*n)/2 ;

    for(ll i=0 ; i < n ;i++){
        v[i][0] = i+1 ;

        for(ll j=1 ; j < n ; j++){
            v[i][j] = v[i][0]*(j+1) ;
            sum += v[i][j] ;
        }
    }

    // cout << sum << endl;


    

    return 0;
}
