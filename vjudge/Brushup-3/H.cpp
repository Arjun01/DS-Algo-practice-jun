#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, max;
	    cin >> x;
	    if(x%2 == 0){
	        max = (x + 2)/2;
	        cout << max;
	    }
	    else{
	        max = (x + 1)/2;
	        cout << max;
	    }
	    cout << endl;
	}
	return 0;
}

