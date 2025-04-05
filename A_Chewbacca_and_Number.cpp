#include<bits/stdc++.h>
using namespace std ;
#include<list>
#define f first
#define s second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long

int main()
{
    string s ; cin>>s ;

    string newS;
    
    for(int i=0  ; i<s.size() ; i++){
        int chVal = (s[i]-'0') ;

        if(chVal == 9  && i==0){

            newS.push_back('9') ;

        }else{
            if(9-chVal < 5){
                newS.push_back((9-chVal)+'0') ;
            }else{
                newS.push_back((chVal)+'0') ;
            }

        }
    }
    cout<<newS<<endl;
}