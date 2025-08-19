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

    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll pal = 0 , c0 = 0 , c1 = 0 ;

    for (ll i = 0; i < n / 2; i++) {
        if (s[i] == s[n - i - 1]) {
            pal++;
        }
    }

    for(ll i=0 ; i < n ; i++){
        if(s[i] == '0') c0++ ;
        else c1++ ;
    }

    ll bp  = (n/2) - k ;
    ll tp  = (n/2) ;


    if((bp >= 0 && bp <= tp)&&(c0 >= bp && c1 >= bp) && even(c0 - bp) && even(c1-bp)){
        yes ;
    }
    else no ;




    // cout << pal << endl;

    // if(pal >= k){
    //     if(pal%2 == k%2) yes ;
    //     else no;
    // }else{
    //     no ;
    // }
   
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1 ;
    cin >> t ;
    while(t--){
      solve() ;
    }
    return 0;
}

