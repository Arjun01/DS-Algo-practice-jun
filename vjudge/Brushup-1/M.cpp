/**Compute a power b
 * Given two integers a and b, compute a power b.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First and only line of input contains two positive integers a and b.

Constraints

1 <= a <= 100
0 <= b <= 9
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main()

{
	  unsigned int a,b,pow = 1 ;
	 cin >> a >> b ;
	 
	 
	 while (b != 0){
			
			pow *= a;		
			--b;
		 }
		 
		 cout << pow;
	
	
	
    
    
    return 0;
}
