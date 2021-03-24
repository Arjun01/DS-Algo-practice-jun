/** Sum of all odd elements
 * Input Format

First line of input contains N - the size of the array and second line contains array elements.

Constraints

1 <= N <= 100
-109 <= ar[i] <= 109
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
	 int n ;
	 cin >> n;
	 long long int a[n],sum = 0;
	for( int i = 0 ; i < n ; i++){
		cin >> a[i] ;
		
		if (a[i] % 2){
			sum += a[i];
			}
	}
	
	cout << sum << '\n';
	
    
    
    return 0;
}
