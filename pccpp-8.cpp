/* PolandBall and Hypothesis */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n>2)
        cout << n - 2;
    else if (n==2)
	    cout << 4;
    else 
        cout << 3;
}