/**
 * Weight Balance
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
       unsigned int w1,w2,x1,x2,m;
       int change,from ,to;
       
        cin>> w1 >> w2 >> x1 >> x2 >> m;
        
        change = w2 -w1;
        
        from  = x1 * m;
        to = x2 * m;
        
        if ( change  >= from && change <= to){
			cout << 1 << '\n'; 
			} else {
				cout << 0 << '\n';
			}
        
              
    }
    
    
      
    return 0;
}

