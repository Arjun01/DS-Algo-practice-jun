/**Simple array sum
 * Given an array of integers, find the sum of its elements.

For example, if the array , , so return .

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains  space-separated integers representing the array's elements.


Output Format

Print the sum of the array's elements as a single integer.


 **/
 
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
    
    
    
    unsigned int n,sum = 0;
    cin>> n;
    unsigned int a[n];
    for(unsigned int i = 0 ; i <n ; i++){
		cin >> a[i];
		sum += a[i];
	}
	
	cout << sum << '\n';
	
    
    
      
    return 0;
}


 
 
