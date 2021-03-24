/**
 * Reverse array
 * Print array in reverse order.
Note: Try solving this using recursion. Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= N <= 100
0 <= ar[i] <= 1018
 * 
 **/
 
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
	 long long int a[n];
	 for( int i = (n-1) ; i >= 0 ; i--){
		cin >> a[i];
		
	}
	
	 for( int i = 0 ; i < n ; i++){
		cout << a[i] << ' ';
	}
    
    
    return 0;
}


 
