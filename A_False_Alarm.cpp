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

    int n , x ;  cin >> n >> x ;
    vector<int>v(n) ;
    input(v) ;

    // bool lol = false ;

    // if(x >= n){
    //     yes ;
    //     return ;
    // }
    int f1 = 0 , l1 = n-1 ;

    for(int i= 0 ; i < n ; i++){
        if(v[i] == 1){
            f1 = i ;
            break ;
        }
    }
    for(int i= n-1 ; i >= 0 ; i--){
        if(v[i] == 1){
            l1 = i ;
            break ;
        }
    }

    // cout<< f1 << " "<< l1 <<" tot : "<< l1+f1 << endl;
    // cout << "x is : " << x << endl;

    int lol = l1 - f1 + 1;


    if(lol > x){
        no;
        return ;
    }

    yes;
   
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

