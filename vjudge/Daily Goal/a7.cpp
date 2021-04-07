/** 
 * Maximizing XOR
 * Given two integers,  and , find the maximal value of  xor , written ,
 *  where  and  satisfy the following condition:
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;
typedef uint32_t ui;


int solve(int l, int r) {

    int i,j;
    int mx = -1000000000;
    for(i=l;i<=r;i++){
        for(j=i;j<=r;j++){
            mx = max(mx,i^j);
        }
    }
    return mx;
}

int main() {
    int res;
    int l;
    cin >> l;
    
    int r;
    cin >> r;
    
    res = solve(l, r);
    cout << res;
    
    return 0;
}
