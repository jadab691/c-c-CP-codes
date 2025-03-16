#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    int n;
    cin >> n;
    
while (n--) 
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size()) {
        cout << "No\n";
        return;
    }

    for (int i = 0; i < s1.size(); i++) {
        if (isVowel(s1[i]) != isVowel(s2[i])) {
            cout << "No\n";
            return;
        }
        if (!isVowel(s1[i]) && s1[i] != s2[i]) {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}
    
return 0;
}
