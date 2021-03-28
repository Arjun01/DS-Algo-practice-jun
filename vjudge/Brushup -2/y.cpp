/**Occurence of a character
 * Given a sentence S and a character ch, count occurrence of the given character in the sentence
 * 
 * Input Format

First line of input contains a sentence - S and second line of input contains a single lowercase character - ch.

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
    char ch;
    getline(cin,s);
    cin>> ch;
    
   int count = 0;
    for(int i = 0; i < s.length(); i++){
		if(s[i] == ch) count++;
    }
   
   cout<<count;
    
   
    
    
  
  return 0;
}
