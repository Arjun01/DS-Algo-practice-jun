/**Prime or not
 * Given a positive integer N, check whether the number is prime or not.

Input Format

First and only line of input contains a integer - N.

Constraints

1 <= N <= 1012
 * **/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



bool isPrime(long long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (long long int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}


int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    long long int n;
    cin >> n;
       


    if (isPrime(n))
        cout <<"Yes";
    else
        cout << "No";

    return 0;
}
