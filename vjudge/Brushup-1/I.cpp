/**Find duplicate elements in the array.
 * Find a duplicate element in the given array of integers. There will be only a single duplicate element in the array.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains size of the array - N and second line contains the elements of the array.

Constraints

2 <= N <= 100
0 <= ar[i] <= 109
 * **/
 
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


  
int main()

{
	 int n ;
	 cin >> n;
	 long long int a[n],dup ;
	for( int i = 0 ; i < n ; i++){
		cin >> a[i] ;
		
		for (int j = 0; j < i; j++){
				if(a[i] == a[j]){
					dup = a[i];
					}
			}
	}
	
	cout << dup << '\n';
	
    
    
    return 0;
}
