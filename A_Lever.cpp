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
  vector<int>a(n) , b(n) ;
  input(a) ;
  input(b) ;


//   print(a) ;
//   print(b) ;

    int ans = 1;

    for(int i=0 ; i < n ; i++){
        if(a[i] > b[i]){
            ans += abs(a[i]-b[i]);
        }
    }

    cout << ans << endl;









      
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
void solve() {
    int n;
    cin >> n;
    if (n % 2 != 0) 
    {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                cout << -1 << " ";
            } else {
                cout << 3 << " ";
            }
        }
    } 
    else 
    {
        if (n == 2) {
            cout << -1 << " " << 2;
        } else {
            for (int i = 0; i < n - 2; ++i) {
                if (i % 2 == 0) {
                    cout << -1 << " ";
                } else {
                    cout << 3 << " ";
                }
            }
            cout << -1 << " " << 2;
        }
    }
    cout << endl;
}