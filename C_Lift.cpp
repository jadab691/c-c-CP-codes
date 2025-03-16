#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
int main()
{
    int t ; cin>>t ;
    for(int i=1 ; i<=t ; i++) 
    {
        int ttl = 0 ;
        int me , lft ; cin>>me>>lft ;
        ttl += abs(me-lft) * 4 ;

        lft = me ;

        ttl += lft*4 ;

        ttl += 19 ;


        cout<<"Case "<<i<<": "<<ttl<<endl;
        
    }
}