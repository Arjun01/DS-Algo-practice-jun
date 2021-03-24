/**Narcissistic number
 * **/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



 long long int countDigit(long long int n)
{
    if (n == 0)
        return 0;
 
    return 1 + countDigit(n / 10);
}
 
bool check(long long int n)
{
    
    long long int l = countDigit(n);
	long long int dup = n;
    long long int sum = 0;
 
    while (dup)
    {
        sum += pow(dup % 10, l);
        dup /= 10;
    }
 
    return (n == sum);
}


int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    long long int n;
    cin >> n;


    if (check(n))
        cout <<"Yes";
    else
        cout << "No";

    return 0;
}
	
