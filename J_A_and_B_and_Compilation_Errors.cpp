#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ll n ; cin>>n ;
        vector<ll>a(n);
        vector<ll>b(n-1);
        vector<ll>c(n-2);

        ll suma = 0 , sumb=0 , sumc=0 ;

        for(ll &x:a) {
            cin>>x ; suma += x;
        }

        for(ll &x:b) {
            cin>>x ; sumb += x;
        }

        for(ll &x:c) {
            cin>>x ; sumc += x;
        }

        cout<<suma-sumb<<endl;
        cout<<sumb-sumc<<endl;
}