/** Bits Magic
 * Given an integer, N. Convert this integer to binary and then if the Kth bit is not set then set the Kth bit otherwise leave it as it is. Then convert this binary to decimal M.
 * Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space seperated integer N and K
Output
For each test case, output a single line containing the new number M
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;
typedef uint32_t ui;


ui solve(ui n,ui k){
	  return ((1 << k) | n);
  }

int main(){
		int t;
		cin>> t;
		while(t--){
			ui n,k;
			cin>>n >> k;
			
			cout << solve(n,k)<< '\n';
		}
return 0;
}
