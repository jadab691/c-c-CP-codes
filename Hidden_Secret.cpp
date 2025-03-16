#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

int main(){
    int t ; cin>>t ;
    cin.ignore() ;
    for(int i=1 ; i<=t ; i++){
        string s1 , s2 ;

        getline(cin , s1 ) ;
         getline(cin , s2 ) ;

         auto p1 = remove(s1.begin() , s1.end() , ' ') ;
         auto p2 = remove(s2.begin() , s2.end() , ' ') ;

         s1.erase(p1,s1.end()) ;
         s2.erase(p2,s2.end()) ;

        transform(s1.begin() , s1.end() , s1.begin() , :: tolower) ;
         transform(s2.begin() , s2.end() , s2.begin() , :: tolower) ;

         sort(s1.begin() ,s1.end()) ;
         sort(s2.begin() ,s2.end()) ;


         cout<<"Case "<<i<<": ";
         if(s1==s2) yes ;
         else no ;

        
    }
}