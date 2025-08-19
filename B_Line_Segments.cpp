#include <bits/stdc++.h>
#include <numeric>  
using namespace std;
#define yes cout << "Yes" << endl
#define no cout << "No" << endl 
#define endl '\n'
#define ll long long
#define ld long double 
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

void solve() {
    ll n;
    cin >> n;
    ll px, py, qx, qy;
    cin >> px >> py >> qx >> qy;

    vector<ll> a(n);
    input(a) ;
    ll mexi = *max_element(a.begin() , a.end()) ;
    ll ttl = 0 ;
    for(int i=0 ; i < n ; i++) 
            ttl += a[i] ;

    ll d1 = px - qx;
    ll d2 = py - qy;
    ll disq = (d1 * d1) + (d2 * d2); 

    // cout << disq << endl;

    ll bakisum = ttl - mexi;
    ll minr = max(0LL , mexi - bakisum);

    // cout << " minr is : " <<  minr << endl;

    ll min_sq = minr * minr;
    ll max_sq = ttl * ttl;

    // cout << "min is : " << min_sq << endl;
    // cout << "mex is : " << max_sq << endl; 

    if (disq >= min_sq && disq <= max_sq) {
        yes;
    } else {
        no;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
