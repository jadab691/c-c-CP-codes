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

// bitwise operator to check , if a number is  power of 2 ;
// power of two has only 1 bit in binary 
bool isPowerOfTwo(ll n) {
    return n > 0 && (n & (n - 1)) == 0;
}


int main() 
{
    ll t ; cin >> t ;
    while(t--){
        ll x ; cin>> x ;
        if(isPowerOfTwo(x)){
            no ;
        }else{
            yes ;
        }
    }
   

   return 0;
}
