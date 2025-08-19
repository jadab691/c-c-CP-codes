#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vec vector
#define veci vector<int>
#define vecl vector<long long>
#define pb push_back
#define ppb pop_back
#define sorta(x) sort(x.begin(), x.end());
#define sortr(x) sort(x.begin(), x.end(), greater<decltype(*x.begin())>())
#define rev(x) reverse(x.begin(), x.end())
#define pr pair
#define f first
#define s second
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)


int main() 
{
    ll n ; cin>> n ;
    vecl v(n) ;
    for(ll i=0 ; i < n ; i++) cin >> v[i] ;

    ll ml = 1 ;
    ll c = 1 ;

    for(ll i=0 ; i < n-1 ; i++){
        if(v[i] <= v[i+1]){
            c++ ;
            ml = max( c , ml ) ;
        }else{
            c = 1 ;
        }
    }

    cout << ml << endl;


    return 0;
}