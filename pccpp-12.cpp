/* Save Luke */
#include <bits/stdc++.h>

using namespace std;

int main() {
    double d,l,v1,v2;
    
    cin >> d >> l >> v1 >> v2;
    double x= ((l -d))*v1/(v1 + v2);
    
    double t = x/v1;
    std::cout << std::setprecision(20) << t << '\n';
    
}