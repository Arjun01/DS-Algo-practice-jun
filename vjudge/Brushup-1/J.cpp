/**Digits sum
 * Given a non-negative integer - N, print the sum of digits of the given number
 * 
 * Input Format

First and only line of input contains a non-negative integer N.

Constraints

0 <= length(N) <= 103
* 
 * **/
 
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


  
int main()

{
	 string n ;
	 cin >> n;
	 long long int sum = 0 ;
	
	 for (int i = 0; i < n.length(); i++) {
        sum = sum + n[i] - 48;
    }
            
	cout << sum << '\n';
	
    
    
    return 0;
}

