/**
 * Print unique elements of array
 * 
 * Print unique elements of the array in the same order as they appear in the input.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains a single integer N - the size of array and second line contains array elements.

Constraints

1 <= N <= 100
0 <= ar[i] <= 109
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


  
int main()

{
	 int n,count ;
	 cin >> n;
	 long long int a[n], freq[n] ;
	 for( int i = 0 ; i <n ; i++){
		cin >> a[i];
		freq[i] = -1;
	}
	
    
    
     for(int i=0; i < n; i++)
    {
        count = 1;
        for(int j=i+1; j< n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    
     for(int i=0; i < n; i++)
    {
        if(freq[i] == 1)
        {
           cout << a[i] << ' ';
        }
    }
    
    return 0;
}

