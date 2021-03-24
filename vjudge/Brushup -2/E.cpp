/***
 * Birthday Cake candles
 * You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

Example


The maximum height candles are  units high. There are  of them, so return .

Function Description

Complete the function birthdayCakeCandles in the editor below.

birthdayCakeCandles has the following parameter(s):

int candles[n]: the candle heights
Returns

int: the number of candles that are tallest
Input Format

The first line contains a single integer, , the size of .
The second line contains  space-separated integers, where each integer  describes the height of .
 * **/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;





int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int n;
    cin >> n;
    long long int a[n];
    long long int  pos = n-1,max = 0,count = 0;
    
    for (int i = 0; i <n ; i++){
			cin >> a[i];
			
	}

	
	std::sort(a, a+n);
	
	max = a[n-1];

    while( a[pos] == max ){
		
		count++;
		pos--;
	}
	    
    cout << count ;
   

    return 0;
}
