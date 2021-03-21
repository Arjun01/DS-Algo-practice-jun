/*B - First and Last Digit
*
* If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
* */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int  sum(long long int n){
	int l;
	l = n % 10;
	while ( n >=  10) {
		n /= 10;
	}
	return n  + l;
}


int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
     int t;
    cin>>t;
    while(t--){
       long long int n;
        cin>> n;
        
        
        cout << sum(n) << '\n';        
    }
    
    
      
    return 0;
}
