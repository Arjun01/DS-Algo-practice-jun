/*Transpose of matrix
 * Given a matrix of size N x M, print transpose of the matrix.

Input Format

First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-109 <= ar[i] <= 109
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long





int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin >> n >> m;

    ll a[n][m];
    ll transpose[n][m];

     
    for( int i = 0; i< n; i++){
		for(int j=0; i<m ; i++){
			cin>> a[i][j];
			
			}
	}
	
	
	 for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) {
         transpose[j][i] = a[i][j];
      }


   for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) {
         cout << " " << transpose[i][j];
         if (j == n - 1)
            cout << endl << endl;
      }
	
	
   
    
   
    
   
    
    
  
  return 0;
}
