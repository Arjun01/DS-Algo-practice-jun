#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m,n = 0;
    string a;
    cin>> m;
    
        while(m--) {
           cin >> a;
            if(a[1] == '+')
                n++;
            else if(a[1] == '-')
                n--;
        }        
       cout<< n;
    
    return 0;
}
