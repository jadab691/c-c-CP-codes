#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main(){ 
    int t ; cin>>t ;
    while(t--){
        ll term ; cin>>term ; 
        
        ll n = ((term-1)/3)+1 ;
        ll Term = 1+((n-1)*3) ;

        if(term == Term) yes ;
        else no ;
    }
}
