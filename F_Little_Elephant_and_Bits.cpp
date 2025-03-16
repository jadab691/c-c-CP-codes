#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    string s ; cin>>s ;
    int len = s.size() ;
    for(int i= 0 ; i<len ; i++){
        if(s[i] == '0'){
            s.erase(i,1) ;
            break ;
        }
    }
    if(len == s.size()){
        s.erase(len-1 ,1) ;
    }

    cout<<s<<endl;

}