#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	
	long long test;
	cin>> test;
	while(test--){
		long long x,y,gcd,lcm,t,b,a;
		cin >> x >>y;
		
		a=x;
		b=y;
		while (b != 0){
			t = b;
			b = a % b;
			a = t;
		}
		gcd = a;
		lcm = (x*y)/gcd;
		cout << lcm << ' '<< gcd;
		
	}
 
  

}
