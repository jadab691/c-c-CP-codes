#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    while(cin>>s>>t)
    {
        if(s=="0" and t=="0") 
        {
            break;
        }
        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());
        int carry=0;
        int i=0,j=0,cnt=0;
        int n=s.size(),m=t.size();
        while(i<n || j< m || carry)
        {
            int a=(i<n)?s[i]-'0':0;
            int b=(j<m)?t[j]-'0':0;
            int s=a+b+carry;
            carry=s/10;
            if(carry) cnt++;
            i++,j++;
        }
        if(cnt==0)
        {
            cout<<"No carry operation.\n";
        }
        else if(cnt==1)
        {
            cout<<cnt<<" carry operation.\n";
        }
        else
        {
            cout<<cnt<<" carry operations.\n";
        }
    }
}