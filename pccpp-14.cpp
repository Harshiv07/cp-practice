/* Divide It!*/
#include <iostream>

using namespace std;

int main() {

    int q;
    long long n;
    cin >> q;
    
    while(q--) {
        cin >> n;
        long steps = 0;
        while(n>1) {
            if(n%2 ==0) {
                n /= 2;
            }
            else if(n%3 ==0) {
                n = 2*n/3;
            }
            else if(n%5 ==0) {
                n = 4*n/5;
            }
            else {
                steps = -1;
                break;
            }
            
            steps++;
        }
        
        cout << steps << endl;
    }
}