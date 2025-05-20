#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define ll long long

int main() {
    
    int t ; cin >> t;
    while (t--) {
        string s;
        cin >> s;

        map<int, int > freq ;
        //frequency guntesi 
        for (int i=0 ; i<s.size() ; i++) {
            freq[s[i] - '0']++;
        }


        string ans = "" ;

        for (int i = 0; i < 10; ++i) {
            int min_required = 9 - i;
            for (int d = min_required ; d <= 9; d++) {
                if (freq[d] > 0) {
                    ans += char('0' + d);
                    freq[d]--;
                    break;
                }
            }
        }

        cout << ans <<endl ;
    }

    return 0;
}
