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

    string s ; cin >> s;
    ll n = s.size() ;
    bool del = false ;
    if(s[0] == '-') del = true ;
    if(del){
        ll last = s[n-1] - '0' ;
        ll prev_last = s[n-2] - '0' ;

        (last > prev_last ? s.erase(n-1 , 1) : s.erase(n-2 , 1)) ;

        if(s == "-0") {
            cout << 0 << endl;
            return ;
        }
        
    }

    
    cout << s << endl;
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

