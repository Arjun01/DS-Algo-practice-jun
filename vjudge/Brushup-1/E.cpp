/**
 * Max element in the array
 * Find maximum element from the given array of integers.

Input Format

First line of input contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= N <= 100
-109 <= ar[i] <= 109
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
    
    
    
    unsigned int n;
    cin>> n;
    long long  int a[n] ,max = INT_MIN;
    for(unsigned int i = 0 ; i <n ; i++){
		cin >> a[i];
		if (a[i] > max) {
				max = a[i];
			}
	}
	
	cout << max << '\n';
	
    
    
      
    return 0;
}
