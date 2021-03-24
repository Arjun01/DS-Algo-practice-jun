/*Long factorial
 * Given a non-negative number - N, print N!

Input Format

First and only line of input contains a number - N.

Constraints

0 <= N <= 20
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
	int fact[21];
	 unsigned int n;
	 cin >> n;
	 
	 fact [0] = 1;
	 for(int i = 1; i <= 20; i++){
		 
		 fact[i] = i * fact[i-1];
		 }
	 

		 
		 cout << fact[n]<< '\n';;
	
	
	
    
    
    return 0;
}

