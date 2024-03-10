/* Bacteria*/
#include <iostream>

using namespace std;

int main() {
    int n,an=0;
    cin >> n;
    while(n){
        if(n&1)an++;
        n>>=1;
    }
    cout << an;

}