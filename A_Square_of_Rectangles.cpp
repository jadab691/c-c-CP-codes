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

    int a, b, a1, b1, a2, b2;
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
 
    if ((a == a1 && a1 == a2 && b + b1 + b2 == a) || (b == b1 && b1 == b2 && a + a1 + a2 == b)) {
        yes ;
        return;
    }
 
    if ((a1 + a2 == a && b1 == b2 && b1 + b == a1 + a2) || (b1 + b2 == b && a1 == a2 && a1 + a == b1 + b2)) {
        yes ;
        return;
    }
 
    no ;
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
