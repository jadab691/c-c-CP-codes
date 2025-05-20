#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long


int main()
{
    int t ; cin >> t ;
    while(t--){
        int n , m , p , q  ;
        cin >> n >> m >> p >> q ;

        int div = n/p ;
        int mod = n%p ;

        if(mod == 0){
            if( div*q == m) yes ;
            else no ; 
        }else{
            yes ;
        }
    
    }
}