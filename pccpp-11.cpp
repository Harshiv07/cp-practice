/* Lemons */
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int answer = min(a, min(b/2, c/4));
    cout << answer*7;
}