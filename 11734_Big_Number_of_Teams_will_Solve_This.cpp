#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int main() {
    int t; 
    cin >> t;
    cin.ignore(); 

    for (int i = 1; i <= t; i++) {
        string s1, s2;
        getline(cin, s1); 
         s1.erase(s1.find_last_not_of(" ") + 1);
        getline(cin, s2); 
         s2.erase(s2.find_last_not_of(" ") + 1);

        cout << "Case " << i << ": ";

        if (s1 == s2) {
         cout << "Yes" << endl;
         continue ;
        } else {
            
             auto p1 = remove(s1.begin() , s1.end() , ' ') ;
             auto p2 = remove(s2.begin() , s2.end() , ' ') ;

             s1.erase(p1,s1.end()) ;
             s2.erase(p2,s2.end()) ;

            if (s1 == s2) {
                cout << "Output Format Error" << endl;
            } else {
                
                transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
                transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

                if (s1 == s2) {
                    cout << "Wrong Answer" << endl;
                } 
            }
        }
    }
}
