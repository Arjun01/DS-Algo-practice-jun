#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printPattern(int);
int main()
{
	ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int k=1 ; k <= t; k++){
		int rows,i ,j;
		cin>> rows;
		
		cout << "Case #"<<k<< ':'<< '\n';
		
		for(i=1; i<=rows; i++)
		{
        /* Print spaces in decreasing order of row */
        for(j=i; j<rows; j++)
        {
           cout<< " ";
        }

        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
           cout<<"*";
        }

        cout<<'\n';
	}
}
	return 0;


}



