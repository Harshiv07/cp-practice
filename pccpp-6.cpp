/* Good Matrix Elements */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int matrix[n][n];
    
    for(int i=0; i<n; i++) 
        for(int j=0; j<n; j++)
            cin >> matrix[i][j];
            
    int sum = 0;
    
	for(int i=0; i<n; i++) {
		sum += matrix[i][i] + matrix[i][n-i-1] + matrix[i][n/2] + matrix[n/2][i];
	}   
	sum = sum - matrix[n/2][n/2]*3;
	cout << sum;
}