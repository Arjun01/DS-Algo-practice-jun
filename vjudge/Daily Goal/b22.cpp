#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long findTrailingZeros(long long n)
{
    long long count = 0;
 
    for (long long i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}



int main()
{
	ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
		long long n;
		cin>> n;
		
		cout<<findTrailingZeros(n)<< "\n";
	}

	return 0;


}



