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
    ll n , k ; cin >> n >> k ;
    if(even(n)){
        if(n/2 >=  k){
            cout << 2*k - 1 << endl;
            return 0 ;
        }else{
            cout << (k-(n/2)) * 2 << endl;
            return 0 ;
        }
    }else{
        if((n/2)+1 >= k){
            cout << 2*k - 1 << endl;
            return 0 ;
        }else{
            cout << (k-(n/2)-1) * 2 << endl;
            return 0 ;
        }
    }
}