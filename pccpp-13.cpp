/* Arrays */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int na, nb, k, m, i;
    cin >> na >> nb;
    cin >> k >> m;
    
    int a[na], b[nb];
    
    for(i=0;i<na;i++)
        cin >> a[i];
    for(i=0;i<nb;i++)
        cin >> b[i];
    
    if(a[k-1] < b[nb-m])
        cout << "YES";
    else
        cout << "NO";
}