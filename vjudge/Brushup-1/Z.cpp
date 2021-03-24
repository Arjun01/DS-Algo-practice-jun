/***
 * Number reverse
 * Given a number N, reverse the number.

Input Format

First and only line of input contains a integer - N.

Constraints

-1018 <= N <= 1018
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
    
    
    
    long long int num,rev = 0;
    cin >> num;
    
       
    while(num)
    {
        rev *= 10;
        rev += num % 10;
        num /= 10;
    }
    cout << rev << '\n';

    return 0;
}
	
