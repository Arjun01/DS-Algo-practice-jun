/** Odd even index
 * Given a string, print all the letters present at odd index, followed by the letters present at even index.

Input Format

Input contains a string S, consisting of ascii characters.

Constraints

1 <= len(S) <= 100
 * **/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long



int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    getline(cin,s);
    
    
    for(int i = 0; i < s.length(); i++){
		if(i% 2 !=0) cout<< s[i];
    }
    
    for(int i = 0; i < s.length(); i++){
		if(i% 2 == 0) cout<< s[i];
    }
    
   
    
   
    
    
  
  return 0;
}
