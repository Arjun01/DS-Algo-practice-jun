/**Armstrong number
 * Given an integer N, check whether it's an Armstrong number or not.
Note: Armstrong number is a number that is equal to the sum of cubes of its digits.

Input Format

First and only line of input contains a integer - N.

Constraints

0 <= N <= 109
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
    
    
    
    long long int n, ogNum, rem, res = 0;
    cin >> n;

	ogNum = n;

    while (ogNum != 0) {
        rem = ogNum % 10;
        res += rem * rem * rem;
        ogNum /= 10;
    }

    if (res == n)
        cout <<"Yes";
    else
        cout << "No";

    return 0;
}
	
	

