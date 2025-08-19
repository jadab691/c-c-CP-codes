#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl 
#define ll long long
#define vec vector
#define veci vector<int>
#define input(vec) for (auto &x : vec) cin >> x ;
#define print(vec) for (auto &x : vec) cout << x << " "; cout << endl;
#define vecl vector<long long>
#define pb push_back
#define ppb pop_back
#define sorta(x) sort(x.begin(), x.end());
#define sortr(x) sort(x.begin(), x.end(), greater<decltype(*x.begin())>())
#define rev(x) reverse(x.begin(), x.end())
#define f first
#define s second
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)


int main() 
{
   ll n , m ; cin >> n >> m ;
   vecl v(m) ;
   input(v) ;
   
   ll ans = v[0]-1 ;

   for(ll i=1 ; i <  m ; i++){
        if(v[i] < v[i-1]){
            ans += (n - v[i-1]) + v[i] ;
        }else if(v[i] > v[i-1]){
            ans += (v[i] - v[i-1]) ;
        }else if(v[i] == v[i-1]){
            continue ;
        }
   }

   cout << ans << endl;

    return 0;
}
