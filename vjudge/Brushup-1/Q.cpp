/**
 * Fibonacci
 * For a given positive integer - N, compute Nth fibonacci number.

Input Format

First and only line of input contains a positive number - N.

Constraints

1 <= N <= 20
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
  
int main ()
{
	ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
	int n;
	
	cin >> n;
	cout << fib(n);
	getchar();
	return 0;
}
