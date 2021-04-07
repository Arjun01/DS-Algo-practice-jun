/*
 * Given an integer , find each  such that:

where  denotes the bitwise XOR operator. Return the number of 's satisfying the criteria.

Example

There are four values that meet the criteria:

Return .

Function Description

Complete the sumXor function in the editor below.

sumXor has the following parameter(s):
- int n: an integer

Returns
- int: the number of values found
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
    long n;
    cin >> n;
    
    long long ans =0,x;
    while(n)
    {
        if(n%2 ==0)
            ans++;
        n/=2;
    }
    x = pow(2,ans);
    
    cout<<x<<endl;
    return 0;
}
