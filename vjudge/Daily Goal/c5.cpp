/*Reverse bits
 * 
 * **/
 
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;
typedef uint32_t ui;


ui solve(ui n){
	   ui ret = 0, power = 31;
    while (n != 0) {
      ret += (n & 1) << power;
      n = n >> 1;
      power -= 1;
    }
    return ret;
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

