/** The missing number
 * Find the missing number in the given list of integers. The list contains 1 to 100 integers but one of the integer is missing. There are no duplicates in the list.

Input Format

Input contains a list of 99 integers.

Constraints

1 <= L[i] <= 100
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main()

{
	 int a[99];
	 for( int i = 0 ; i <99 ; i++){
		cin >> a[i];
	}
	 
	 
	int total = 4950;
    for (int i = 0; i < 99; i++)
        total -= a[i];

		 
		 cout << total;
	
	
	
    
    
    return 0;
}
