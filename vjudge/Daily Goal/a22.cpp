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
    for(int i=1 ; i <= t; i++){
		int n;
		cin>> n;
		cout << "Case #"<< i << ':'<< '\n';
		printPattern(n);
		cout << '\n';
	}
	return 0;


}
void printPattern(int n)
{
	int i, j, k = 0;
    for (i = 1; i <= (n/2)+1; i++) 
    {
        // Print spaces
        for (j = i; j < n; j++) {
            cout << " ";
        }
        // Print #
        while (k != (2 * i - 1)) {
            if (k == 0 || k == 2 * i - 2)
                cout << "*";
            else
                cout << " ";
            k++;
            ;
        }
        k = 0;
        cout << endl; // print next row
    }
    
     // Print lower triangle
    for (i = n/2; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print #
        k = 0;
        while (k != (2 * i - 1)) {
            if (k == 0 or k == 2 * i - 2)
                cout << "*";
            else
                cout << " ";
            k++;
        }
        cout << endl;
    }
}
