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

    ll n , k ; cin >> n >> k ;
    vector<ll>v(n) ;
    ll t_sum = 0 ;
    for(auto &x:v) 
    {
        cin >> x ;
    }

    for(ll i=0 ; i < k ; i++){
        t_sum += v[i] ;
    }

    // if(n == 1){
    //     cout << 1 << endl;
    //     return ;
    // }

    // sliding window 

    ll min_sum = t_sum ;
    ll min_idx = 0 ;

    for(ll i=k ; i < n ; i++){
        t_sum = t_sum -  v[i-k] + v[i] ; // delet the old one, and add the current one ;
        if(min_sum > t_sum){
            min_sum = t_sum ;
            min_idx = (i-k+1) ;
        }
    }

    

    cout << min_idx+1 << endl;
    
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1 ;
    //cin >> t ;
    while(t--){
      solve() ;
    }
    return 0;
}
