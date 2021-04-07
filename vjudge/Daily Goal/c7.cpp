/*Consider two non-negative long integers,  and , where . The bitwise AND of all long integers in the inclusive range between  and  can be expressed as , where  is the bitwise AND operator.

Given  pairs of long integers,  and , compute and print the bitwise AND of all natural numbers in the inclusive range between  and .

For example, if  and , the calculation is .

Function Description
 * **/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    long long int a,b;
    cin>>a>>b;
    cout<<(a&b)<<endl;
  }
  return 0;
}
