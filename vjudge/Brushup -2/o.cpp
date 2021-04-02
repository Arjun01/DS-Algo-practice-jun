#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int a,b,c;
   cin>>a>>b>>c;
   if(a==b && b == c && a== 0) exit(0);
   if(b-a == c-b) cout << "AP "<< '\n';
   else cout << "GP "<< '\n';
    
    return 0;
}

