/**
 * A Very big sum
 * In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

int ar[n]: an array of integers .
Return

long: the sum of all array elements
Input Format

The first line of the input consists of an integer .
The next line contains  space-separated integers contained in the array.

Output Format

Return the integer sum of the elements in the array.

Constraints


Sample Input
 * 
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
    
    
    int n;
    cin >> n;
    
    long long int a[n],sum =0;
    
    for (int i = 0; i < n; i++){
			 cin >> a[i];
			 sum += a[i];
		}
   

    cout << sum << '\n';

    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
