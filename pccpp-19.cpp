/* k-rounding */
#include <bits/stdc++.h> 
using namespace std; 

long long gcd(long long a,long long b) { 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}

long long lcm(long long a, long long b) {  
    return (a*b)/gcd(a, b);  
} 
  
int main() { 
    long long n,k;
    cin >> n >> k;
    cout << lcm(n, pow(10,k)); 
    return 0; 
}