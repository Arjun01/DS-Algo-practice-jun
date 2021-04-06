/** Status and Updates
 * Bob just learned about bitwise operators. Since Alice is an expert, she decided to play a game, she will give a number x to Bob and will ask some questions:

There will be 4 different kinds of queries:-

Alice gives an integer i and Bob has to report the status of the ith bit in x, the answer is "ON" if it is on else "OFF".

Alice gives an integer i and Bob has to turn on the ith bit in x.

Alice gives an integer i and Bob has to turn off the ith bit in x.

Alice gives two integers p and q and in the binary representation of x Bob has to swap the pth and the qth bits.

The value of x changes after any update operation.

positions i, p, and q are always counted from the right or from the least significant bit.

If anyone of i, p, or q is greater than the number of bits in the binary representation of x, consider 0 at that position.

###Input:

First-line will contain T, the number of test cases. Then the test cases follow.
the first line of each test case contains two space-separated integers x,Q.
2Q lines follow.
first line is an integer, the query type.
for each query of type 1 to 3, there will be the integer i
for the query of type 4, there will be two space-separated integers, the integers p,q
###Output:
For the queries of the first kind, print "ON" or "OFF".
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;
typedef uint32_t ui;



int main(){
		ui t;
		cin>> t;
		while(t--){
			ui n,Q;
			cin>>n >> Q;
			for(ui j =0 ; j < Q; j++){
				ui type;
				cin >> type;
				ui i;
				ui p,q;
				if(type ==1 ){
					
					cin >> i;
					i = i-1;
					if ((n & (1LL << i)) !=0)
					cout << "ON" << "\n";
					else
					cout << "OFF" << "\n";
				}
				else if( type == 2){
					cin >> i;
					i = i-1;
					n = ((1LL << i) | n);
				}
				else if (type ==3 ){
					cin >> i;
					i = i-1;
					n = (n & (~(1 << i)));
				}
				else if(type == 4){
					
					cin >> p >> q;
					p = p-1;
					q = q-1;
					
					 if (((n & (1LL << p)) >> p) ^ ((n & (1LL << q)) >> q)){
					   n ^= (1 << p);
                       n ^= (1 << q);
						}
					
					}
					
			}
			
			
		}
return 0;
}

