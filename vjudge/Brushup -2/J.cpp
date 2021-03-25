/**Adding reversed Numbers
 * 
 * **/
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int con(int x)
{
    int ans=0;
    while(x)
    {
        ans=ans*10+x%10; 
        x/=10;
    }
    return ans;
}


int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b,n,x;
    cin >> n;
    
   
        for(int i=1;i<=n;i++)
        {
            cin>> a >> b;        
             x=con(a)+con(b);
            cout << con(x) << '\n';
        }

	

    return 0;
}


