/***
 * For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.
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
    
    
    long long int n;
    cin >> n;
    
    long long int fN =0;
    
    if(n % 2 == 0){
		fN = (n)/2;
	}
	else {
		fN = -(n + 1)/ 2;
	}

    cout << fN << '\n';

    return 0;
}
