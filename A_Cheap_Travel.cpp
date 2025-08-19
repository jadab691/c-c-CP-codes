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
   int  n , m , a , b ;
   cin  >> n >> m >> a >>  b ;

   int needa = n ;
   int needb = n/m ;
   int ans  ;

   int costa=0 , costb=0 , costc=0 ;

    costa += (n*a) ;

    costb += (n/m)*b + (n%m)*a ;

    if(n%m == 0){
        costc += (n/m)*b ;
    }else{
        costc += ((n/m)*b)+b ;
    }


    ans = min(costa , min(costb , costc)) ;
    cout << ans << endl;

   return 0;
}
