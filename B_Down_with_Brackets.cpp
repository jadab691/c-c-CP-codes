#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl 
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


int main() 
{
   int t ; cin >> t ; 
   while(t--){

    string s ; cin >> s;
    int n = s.size() ;

    if(n == 2){
        no ;
        continue ;
    }

    int op=0 , cnt = 0 ;

    for(int i=0 ; i < n; i++){
        if(s[i] == '(') op++ ;
        else op-- ;

        if(op == 0) cnt++ ;
    }

    (cnt < 2 ? no : yes);
   }
   return 0;
}