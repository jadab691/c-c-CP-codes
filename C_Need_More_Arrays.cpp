#include <bits/stdc++.h>
#include <numeric>  
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl 
#define endl '\n'
#define ll long long
#define input(vec) for (auto &x : vec) cin >> x ;
#define print(vec) for (auto &x : vec) cout << x << " "; cout << endl;
#define pb push_back
#define ppb pop_back
#define sorta(x) sort(x.begin(), x.end());
#define sortr(x) sort(x.begin(), x.end(), greater<decltype(*x.begin())>())
#define rev(x) reverse(x.begin(), x.end())
#define f first
#define s second
#define even(x) ((x) % 2 == 0)
#define odd(x) ((x) % 2 != 0)


void solve(){

    ll n  ; cin >>n ;
    vector<ll>v(n) ;
    input(v) ;
    // print(v) ;
    if(n == 1) {
        cout << 1 << endl;
        return ;
    }
    ll mini = *min_element(v.begin() , v.end()) ;
    ll mexi = *max_element(v.begin() , v.end()) ;

    if(mini == mexi){
        cout << 1 << endl;
        return ;
    }

    ll ans = 1 ;

    for(ll i=1 ; i < n; i++){
        if(v[i-1]+1 < v[i]  ) ans++ ;
    }

    // cout << ans << endl;

    set<ll>s(v.begin(), v.end());

    ll ns = 0 ;

    ll sesh = -10000000000000;

    for(auto x:s){
        if((sesh+1) < x){
            ns++ ;
            sesh = x ;
        }
    }

    cout << max(ns , ans) << endl;
  
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1 ;
    cin >> t ;
    while(t--){
      solve() ;
    }
    return 0;
}

