/**
 * Harshad number
 * 	Given an integer N, check whether it is a Harshad number or not.
Note: A Harshad number is an integer, that is divisible by the sum of its digits.

Input Format

First and only line of input contains a integer - N.

Constraints

1 <= N <= 109
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
    
    
    
    long long int num, rem, sum = 0;
    cin >> num;
    long long int n = num;
       
        while(num > 0)
        {  
            rem = num%10;  
            sum = sum + rem;  
            num = num/10;  
        }      

    if (n % sum == 0)
        cout <<"Yes";
    else
        cout << "No";

    return 0;
}
	
	
