
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void binary(unsigned n)
{
	if (n > 1)
		binary(n >> 1);

	printf("%d", n & 1);
}


int main(void)
{
	int t;
	cin >> t;
	while(t--){
		unsigned  n;
		cin >> n;
		binary(n);
		cout<< '\n';
	}
	
	return 0;
}

