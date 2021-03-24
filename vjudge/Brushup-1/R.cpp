/**
 * Number of mulitples
 * Given a positive integer - N, print the number of multiples of 3, 5 between [1, N].

Input Format

First and only line of input contains a positive integer - N.

Constraints

1 <= N <=1018
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
    
    
    
    long long int n, count = 0;
    cin >> n;

	count += n/5;
	count += n/3;
	
	cout << count << '\n';
	
	
	
    
    
      
    return 0;
}
