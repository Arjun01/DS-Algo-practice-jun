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
	 long long int n ;
	 cin >> n;
	 long long int sum = 0 ;
	
	while (n > 0){
		sum += n %10;
		n /= 10;
		}
	
	cout << sum << '\n';
	
    
    
    return 0;
}

