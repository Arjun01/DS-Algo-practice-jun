/*Swap bits
 * 
 * **/
 
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;
typedef unsigned int ui;


ui solve(ui n){
	   ui bitval;
    for(int i = 0; i < 32; i+=2) {
        bitval = ((n>>i)&1) | (((n>>(i+1))&1)<<1);
        
       if(bitval > 0 && bitval < 3)
            n ^= ((1U<<i) | (1U<<(i+1)));  
           }
    return n;
}

int main(){
		int t;
		cin>> t;
		while(t--){
			ui n;
			cin>>n;
			
			cout << solve(n)<< '\n';
		}
return 0;
}

