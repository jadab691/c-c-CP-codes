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
                                            
    ll n , s ; cin >> n>> s ;

    int ans = 0 ;
    // int c=1;
    for(int i=1 ; i <= n ; i++){
        // cout<< "case is = " << c++ << endl;
        int a , b , x , y ; cin >> a >> b >> x >> y ;

        if(x==y && x+y == s){
            if((a==1 && b==1 ) || (a==-1 && b==-1) || (a==1 && b==-1 ) || (a==-1 && b==1)){
                ans++ ;
                continue ;
            }
        }

        if(x == y){
            if((a==1 && b==1 ) || (a==-1 && b==-1)){
                ans++ ;
            }
        }else if (x+y == s ){
            if((a==1 && b==-1 ) || (a==-1 && b==1)){
                ans++ ;
            }
        }
        // cout << "ans is = " << ans << endl;
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
