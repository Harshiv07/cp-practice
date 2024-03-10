/* Game 23 */
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    int moves = -1;
    if (m % n == 0) {
        moves = 0;
        int div = m / n;
        while (div % 2 == 0)
            div /= 2, moves++;
        while (div % 3 == 0)
            div /= 3, moves++;
        if (div != 1)
            moves = -1;
    }
    cout << moves << endl;
    
}