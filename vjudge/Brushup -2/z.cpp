/**Vowels in a string
 * Given a string, check if it contains only vowels.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.
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
    cin>> s;
   int onlyVowel = 1;
    for(int i = 0; i < s.length(); i++){
		if( s[i] == 'a' ||  s[i] == 'e' ||  s[i] == 'i' ||  s[i] == 'o' ||  s[i] == 'u' ||
		s[i] == 'A' ||  s[i] == 'E' ||  s[i] == 'I' ||  s[i] == 'O' ||  s[i] == 'U'){
       	continue;
       	}
       	else {
			onlyVowel = 0;
			break;
			}
    }
    
   if(onlyVowel){
	   cout<< "Yes";
	   }
	   else cout << "No";
    
   
    
    
  
  return 0;
}
