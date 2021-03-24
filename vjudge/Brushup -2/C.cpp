/**Plus Minus
 * Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Example

There are  elements, two positive, two negative and one zero. Their ratios are ,  and . Results are printed as:

0.400000
0.400000
0.200000
Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

int arr[n]: an array of integers
Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer, , the size of the array.
The second line contains  space-separated integers that describe .


 * **/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void divide(int x, int y)
{
   
    if (x == 0) {
        cout << 0.000000 << '\n';
        return;
    }

    int d = x / y;
  
   
    for (int i = 0; i <= 6; i++) {
        cout << d;
        x = x - (y * d);
        
        x = x * 10;
        d = x / y;
        if (i == 0)
            cout << ".";
    }
    cout<< '\n';
}


int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int n;
    cin >> n;
    
    int a[n];
    int pos = 0,neg = 0,zero = 0;
    
    for (int i = 0; i <n ; i++){
			cin >> a[i];
			if(a[i] < 0) neg++;
			else if(a[i] > 0) pos++;
			else zero++;
	}
    
    divide(pos,n);
    divide(neg,n);
    divide(zero,n);

    return 0;
}
