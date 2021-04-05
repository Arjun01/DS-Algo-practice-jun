/**Triple Trouble
 * Given an array of size 3X+1, where every element occurs three times, except one element, which occurs only once. Find the element that occurs only once.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array (of the form 3X + 1) and second line contains the elements of the array.
 * **/
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;


ll solve(ll a[],ll n){
	ll bitSum[32] = {0};
	for(ll i=0; i < n; i++){
			ll bitMask =1;
			for(ll j = 31; j >= 0; j--){
				ll bit = a[i] & bitMask;
				if(bit != 0){
						bitSum[j] +=1;
				}
				bitMask = bitMask << 1;
				
			}
	}
	ll res =0;
	for(ll i=0; i <32; i++){
			res = res << 1;
			res += bitSum[i] % 3;
	}	
	return res;
}

int main(){
		int t;
		cin>> t;
		while(t--){
			ll n;
			cin>>n;
			ll a[n];
			for(ll i=0; i < n; i++){
					cin>> a[i];
			}
			cout << solve(a,n)<< '\n';
		}
return 0;
}
