/* Love A*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int i, cnt =0;
    cin >> s;
    
    for(i=0; i<s.length(); i++) if(s[i] == 'a') cnt++;
    int l = s.length();
    cout << min(l, 2*cnt -1);
   
}