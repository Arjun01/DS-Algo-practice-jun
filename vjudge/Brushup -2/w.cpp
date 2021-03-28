/** Sparse matrix
 * Given a matrix of size N x M, print whether it is a sparse matrix or not.
Note: If a matrix contain 0 in more than half of its cells, then it is called a sparse matrix.

Input Format

First line of input contains N, M - size of the matrix. Its followed by N lines each containing M intergers - elements of the matrix.

Constraints

1 <= N, M <= 100
0 <= ar[i] <= 109

Output Format

Print "Yes" if the given matrix is a sparse matrix, otherwise print "No".

Sample Input 0

2 3
5 0 0
0 8 0
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
    int halfsize = (n + m)/2;
    ll a[n+m];
    int count = 0;
    
    for( int i = 0; i<(n+m); i++){
			cin>> a[i];
			if(a[i] == 0)  count++;
	}
	
	if(count > halfsize) cout<< "Yes";
		else cout<< "No";
   
    
   
    
   
    
    
  
  return 0;
}

