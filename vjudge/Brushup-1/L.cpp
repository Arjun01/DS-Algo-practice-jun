/* Traingle validtor
 * Given the length of 3 sides of a triangle, check whether the triangle is valid or not.

Input Format

First and only line of input contains three integers A, B, C - length of sides of the triangle.

Constraints

1 <= A, B, C <= 109
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main()

{
	 long long int a,b,c ;
	 cin >> a >> b >> c;
	 
	 
	  if (a + b <= c || a + c <= b || b + c <= a)
       cout << "No";
    else
       cout << "Yes";
	
	
	
    
    
    return 0;
}
