#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    
        int sq;
        
	while(cin >> sq){
        if(sq == 0) break;

        int sol = (sq*(sq + 1)*(2*sq + 1))/6;
       cout<< sol<< '\n';
    }
    return 0;
}
