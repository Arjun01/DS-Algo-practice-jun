/**
 * Diagonal difference
 * Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = . The right to left diagonal = . Their absolute difference is .

Function description

Complete the  function in the editor below.

diagonalDifference takes the following parameter:

int arr[n][m]: an array of integers
Return

int: the absolute diagonal difference
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
    int arr[n][n];
    
    for(int i =0; i <n; i++){
			for(int j = 0 ; j <n ; j++){
					cin >> arr[i][j];
				}
		}
    
  
    int d1 = 0, d2 = 0;
  
    for (int i = 0; i < n; i++)
    {
        d1 += arr[i][i];
        d2 += arr[i][n-i-1];
    }
  
    
    cout << abs(d1 - d2);

    return 0;
}

