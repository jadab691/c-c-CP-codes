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

    int n ; cin >> n ;
    vector<int> v(n) ;
    input(v) ;

    for(int i=1 ; i < n ; i++){
        int diff = abs(v[i] - v[i-1]) ;
        if(diff <= 1) {
            cout << 0 << endl;
            return ;
        }
    }

    bool lol = false ;

    for(int i=0 ; i < n-2 ; i++){

        if( v[i] >= min(v[i+1] , v[i+2]) && v[i] <= max(v[i+1] , v[i+2]) ){
            lol = true ;
            break ;
        }
        if( v[i+2] >= min(v[i] , v[i+1]) && v[i+2] <= max(v[i] , v[i+1]) ){
            lol = true ;
            break ;
        }
    }

    cout << (lol? 1 : -1 ) << endl;

   
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

