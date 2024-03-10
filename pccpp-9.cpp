/* Die rolls probability */
#include <iostream>

using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    
    int m = max(y,w);
    
    int num, den;
    
    if(m == 1) {
        num = 1;
        den = 1;
    }
    else if (m ==2) {
        num = 5;
        den = 6;
    }
    else if (m ==3) {
        num = 2;
        den = 3;
    }
    else if (m ==4) {
        num = 1;
        den = 2;
    }
    else if (m ==5) {
        num = 1;
        den = 3;
    }
    else if (m ==6) {
        num = 1;
        den = 6;
    }
    
    cout << num << "/" << den;
}