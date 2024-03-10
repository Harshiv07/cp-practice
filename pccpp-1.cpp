/*Burglar and Matchs*/

#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) { 
    return (a.second > b.second); 
} 
  
int main() {
	long n, matches=0;
	int m;
	vector< pair <int,int> > vect; 

	cin >> n >> m;

	long b;
	int a;

	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		vect.push_back( make_pair(a, b));
	}

	sort(vect.begin(), vect.end(), sortbysec); 

// 	for (int i=0; i<m; i++) { 
//         cout << vect[i].first << " "
//              << vect[i].second << endl; 
//     } 
    
    int tmp = n;
    for (int i=0; i<m; i++) {
        if(vect[i].first < tmp) {
            tmp -=  vect[i].first;
            matches += vect[i].first*vect[i].second;
        }
        else {
            matches += tmp*vect[i].second;
            break;
        }
    }
    
    cout << matches << endl;
	return 0;
}