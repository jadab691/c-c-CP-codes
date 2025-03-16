#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main() 
{
    ll n , cnt=0 ; 

    while(cin>>n && n!=0){
        cnt++ ;
        vector<ll>v(n) ;
        ll avg=0 , move=0 ;
        for(ll &x:v) {
            cin>>x ;
            avg+=x ;
        }
        avg /= n ;
        for(ll i=0 ; i<n ; i++){
            if(v[i] > avg){
                move += (v[i] - avg) ;
            }
        }
        cout<<"Set #"<<cnt<<endl;
        cout<<"The minimum number of moves is "<<move<<"."<<endl<<endl;

    }
}