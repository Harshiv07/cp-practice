/* Triangular Numbers */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t[100];
    
    for(int i=0; i<100; i++) {
        t[i] = (i+1)*(i+2);
    }
    
    int n;
    cin >> n;
    
    int *end = t + 100;
    // find the value n*2:
    int *result = std::find(t, end, n*2);
    
    if (result != end) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}