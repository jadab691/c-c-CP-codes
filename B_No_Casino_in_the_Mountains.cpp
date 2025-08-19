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
   
    int n ; int k ; cin >> n >> k;
    vector<int>v(n);
    input(v) ;

    int good = 0 , bad =  0 ;

    for(int i=0 ; i < n ;i++){
        if(i==0) good++ ;
        else bad++ ;
    }

    bool lol = true ;
    int pik = 0 ;

    for(int i=0 ; i < n  ; i++){
        int j ;
        if(v[i] == 0){
            for(j = i ; j < i+k ; j++){
                if(v[j]==1){
                    lol = false ;
                    break ;
                }
            }
            if(lol){
                pik++ ;
                i += k  ;
            }else{
                i += j ;
            }

        }
    }


    cout << pik << endl;
    






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
