#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long


int main(){
    int n ; cin >> n ;
    int g4 = 0 , g3 = 0 , g2 =0 , g1 =0 ;
    vector<int>v(n) ;
    for(auto &x:v) {
        cin >> x;
        if(x == 4) g4 ++ ;
        else if ( x == 3) g3++ ;
        else if (x == 2) g2++ ;
        else g1++ ;
    }

    int car = g4 ;

    car += g3 ;

    if(g3 <= g1){
        g1 -= g3 ;
    }else if(g3 > g1){
        g1 = 0 ;
    }

    if(g2 % 2 == 0){
        car += g2/2  ;
    }else{
        car += g2/2 + 1;
        g1 -= 2 ;
    }

    if(g1 > 0) {
        car+= (g1+3)/4 ;
    }

    
    
    cout << car << endl;
    return 0 ;
}