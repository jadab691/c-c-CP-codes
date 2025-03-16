#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl



bool even(int x){
    if(x%2 == 0) return true ;
    else return false ;
}
bool odd(int x){
    if(x%2 != 0) return true ;
    else return false ;
}



int main()
{
    int t; cin>>t ;
    for(int i=1 ; i<=t ; i++)
    {
        int r1 , c1 , r2 , c2 ; cin>>r1>>c1>>r2>>c2;

        bool white1 = false ;
        bool white2 = false ;

        if((even(r1) && even(c1)) || (odd(r1) && odd(c1))) white1 = true ;
        if((even(r2) && even(c2)) || (odd(r2) && odd(c2))) white2 = true ;

        if((white1 && !white2) || (!white1 && white2)){
            cout<<"Case "<<i<<": impossible"<<endl;
        }else{
            if(abs(r2-r1) == abs(c2-c1)){
                cout<<"Case "<<i<<": 1"<<endl;
            }
            else{
                cout<<"Case "<<i<<": 2"<<endl;
            }
        }
        
    }
}