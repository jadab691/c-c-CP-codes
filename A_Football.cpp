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
    int n = s.size() ;
    bool lol = false ;


    if(n >= 7){
        for(int i=0 ; i < n  ; i++){
            if(s.substr(i , 7) == string(7 , s[i])){
                lol = true ;
            }
        }
    }


    if(lol) yes ;
    else no ;

    return 0 ;
}