/*Given an array of n non-negative integers: A1, A2, …, AN. Your mission is finding a pair of integers Au, Av (1 ≤ u < v ≤ N) such that (Au and Av) is as large as possible. And is a bit-wise operation which is corresponding to & in C++ and Java.

 

Input
The first line of the input contains a single integer N. The ith line in the next N lines contains the Ai.

 

Output
Contains a single integer which is the largest value of Au and Av where 1 ≤ u < v ≤ N.
 * **/
#include <bits/stdc++.h>
using namespace std;
#define int long long  
signed main() {
	int n,ans=-1,temp;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) 
	    cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
	    temp=a[i] & a[i+1];
	    //cout<<temp<<" ";
	    if(temp>ans)
	        ans=temp;
	}
	cout<<ans;
	return 0;
}
