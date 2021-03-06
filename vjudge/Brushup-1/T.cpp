/*
 * Square sum
 * 
 * Given a positive integer N, print the sum of squares of 1st N natural numbers.

Input Format

First and only line of input contains positive integer - N.

Constraints

1 <= N <= 103
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

	sum = (n * (n +1)* (( 2 * n )+1)) / 6;
	
	cout << sum << '\n';
	
	
	
    
    
      
    return 0;
}
