#include <bits/stdc++.h>
#include <numeric>  
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl 
#define endl '\n'
#define ll long long int
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
  ll cnt = 0 ;
  bool lol = false ;
  ll ans = -1 ;
  vector<ll>div ;

  
  for(ll i = 1  ; i*i <= n ; i++){
    if(n%i == 0) {
      div.push_back(i);
      div.push_back(n/i) ;
    }
   
  }
  sorta(div) ;
  set<ll>s(div.begin() , div.end()) ;
  div.assign(s.begin() , s.end()) ;

  if(div.size() >= k ){
    cout << div[k-1] << endl;
  }else{
    cout << -1 << endl;
  }

      
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1 ;
    // cin >> t ;
    while(t--){
      solve() ;
    }
    return 0;
}
