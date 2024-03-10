/* Subtractions */
#include <bits/stdc++.h>

using namespace std;

int countSteps(int x, int y) { 
    if (x%y == 0)  return x/y; 
    return x/y + countSteps(y, x%y); 
} 

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << countSteps(a,b) << endl;    
    }
}