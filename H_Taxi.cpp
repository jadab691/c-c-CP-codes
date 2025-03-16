#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    int n ; cin>>n ;
    vector<ll>v(n) ;
    for(ll &x:v) cin>>x;

    ll g1=0 , g2=0 , g3=0 , g4=0  ; 

    for(int i=0 ; i<n ; i++){
        if(v[i]==1) g1++;
        else if(v[i]==2) g2++ ;
         else if(v[i]==3) g3++ ;
          else if(v[i]==4) g4++ ;
    }

    ll taxi = 0 ;
    taxi += g4 ;
    taxi += (g3) ;

    if(g3<g1) {
        g1 = g1-g3 ;
    }else{
        g1 = 0 ;
    }

    if(g2 % 2==0){
        taxi += g2/2 ;
    }else{
        taxi += (g2/2)+1;
        g1 = max((ll)0 , g1-2) ;
    }

    if(g1 > 0){
        if(g1 >= 4){
            if(g1%4 == 0){
                taxi += g1/4 ;
            }else{
                taxi += (g1/4)+1 ;
            }
        }else{
            taxi++;
        }
    }

    cout<<taxi<<endl;


}