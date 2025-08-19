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
    int n ; cin >> n;
    vector<int>v(n) ;
    input(v) ;
    // print(v) ;

    int mini = *min_element(v.begin() , v.end()) ;
    int mexi = *max_element(v.begin()  , v.end()) ;

    if(mini == mexi ) {
        no ;
        return ;
    }
        yes ;
        for(int i= 0 ; i < n ; i++){
            if(mexi == v[i]) cout << 2 << " ";
            else cout << 1 << " " ;
        }
        cout << endl;
     
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

