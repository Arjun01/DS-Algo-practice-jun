
/**
 * Pawri Meme
 * */
 
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
    
    
    
    unsigned int t;
    cin>> t;
    while(t--){
      string str;
      cin >> str;
       size_t index = 0;
	while (true) {
     /* Locate the substring to replace. */
     index = str.find("party", index);
     if (index == std::string::npos) break;

     /* Make the replacement. */
     str.replace(index, 5, "pawri");

     /* Advance index forward so the next iteration doesn't pick it up as well. */
     index += 5;
	}
	
	cout << str << '\n';
        
              
    }
    
    
      
    return 0;
}

