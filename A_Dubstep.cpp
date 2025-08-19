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
    string s ; cin >> s ;

    int i = 0 ; 
    bool lol = false ;
    bool first = true ;

    while( i < s.size()){
        if((s[i] == 'W') && (s[i+1] == 'U') && (s[i+2] == 'B')){
            i += 3;
            lol = true ;
        }else{
            if(lol && !first) cout << " " ;

            cout << s[i] ;
            
            lol = false ;
            first = false ;
            i++ ;
        }
        
    }

    cout << endl;
   



    return 0;
}
