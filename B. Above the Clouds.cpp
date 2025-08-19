#include <bits/stdc++.h>
#include <numeric>  
using namespace std;
#define yes cout << "Yes" << endl
#define no cout << "No" << endl 
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
    string s ; cin >> s;

    bool lol = false ;

    for(int i= 1 ; i < n-1 ; i++){
        for(int j=0 ; j <i ; j++){
            if(s[i] == s[j]){
                lol = true ;
                break ;
            }
        }
    }
    if(lol){
        yes ;
        return ;
    }
    for(int i=n-2  ;  i >0 ; i--){
        for(int j = n-1 ; j > i ; j--){
            if(s[i] == s[j]){
                lol = true ;
                break ;
            }
        }
    }

    if(lol){
        yes ;
        return ;
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

