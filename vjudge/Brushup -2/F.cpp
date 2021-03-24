/**Staircase
 * This is a staircase of size :

   #
  ##
 ###
####
Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Function Description

Complete the staircase function in the editor below.

staircase has the following parameter(s):

int n: an integer
Print

Print a staircase as described above.
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
    
    
    int n;
    cin >> n;
   
    for(int i= 1; i <= n; i++){
		for(int j = 1 ; j <= n-i; j++)
			cout<< " ";
			
		for(int j = 1 ; j <= i; j++)
			cout<< "#";
		cout << '\n';
		}   
    
   

    return 0;
}

