/**
 * Cubes sum
 * **/
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    long long int n, sum = 0;
    cin >> n;

	sum = (n * (n +1)) / 2;
	sum *= sum;
	
	cout << sum << '\n';
	
	
	
    
    
      
    return 0;
}
