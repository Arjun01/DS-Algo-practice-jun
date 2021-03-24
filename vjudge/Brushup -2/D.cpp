/**Mini max sum
 * Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example

The minimum sum is  and the maximum sum is . The function prints

16 24
Function Description

Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):

arr: an array of  integers
Print

Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.

Input Format

A single line of five space-separated integers.
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
    
    
    
    long long int a[5];
    int min = 0,max = 0;
    
    for (int i = 0; i <5 ; i++){
			cin >> a[i];
			
	}
	
	std::sort(a, a+5);
	//sort(arr, arr + n);
    
    min = a[0] + a[1] + a[2] + a[3];
    
    max = a[4] + a[1] + a[2] + a[3];
    
    cout << min << ' ' << max;
   

    return 0;
}

