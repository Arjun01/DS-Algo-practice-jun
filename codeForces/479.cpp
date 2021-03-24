/**
 *Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions. On the last class the teacher wrote three positive integers a, b, c on the blackboard. The task was to insert signs of operations '+' and '*', and probably brackets between the numbers so that the value of the resulting expression is as large as possible. Let's consider an example: assume that the teacher wrote numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:

1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
Note that you can insert operation signs only between a and b, and between b and c, that is, you cannot swap integers. For instance, in the given sample you cannot get expression (1+3)*2.

It's easy to see that the maximum value that you can obtain is 9.

Your task is: given a, b and c print the maximum value that you can get.

Input
The input contains three integers a, b and c, each on a single line (1 ≤ a, b, c ≤ 10).

Output
Print the maximum value of the expression that you can obtain.
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
    
    
     int a,b,c,max = 0;
    cin >> a >> b >> c;
    
    int s1 ,s2,s3,s4,s5,s6;
    
	s1 = a + (b * c);
	s2 = a * (b + c);
	s3 = a * b * c;
	s4 =(a + b) * c;
	s5 = (a * b) + c;
	s6 = a + b + c;
	
	if( s1 > max) max = s1;
	if (s2 > max) max = s2;
	if (s3 > max) max = s3;
	if (s4 > max) max = s4;
	if (s5 > max) max = s5;
    if (s6 > max) max = s6;
   
    cout << max << '\n';

    return 0;
}
