#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long


int main() {


    int n ; cin >> n ;

    if((n%4 == 0) ||(n%7 == 0) || (n%44 == 0) || (n%77 == 0) || (n%47 == 0) || (n%74 == 0) ||(n%444 == 0) || (n%777 == 0) || (n%447 == 0) || (n%477 == 0)  || (n%774 == 0) || (n%744 == 0))                                         
     yes ;
    else no ;


    return 0;
}
