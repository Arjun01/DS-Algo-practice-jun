#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
   long long n,count = 0;
   cin >> n;
   long long a[n];
   for(long long k=0; k <n; k++){
		cin>> a[k];
	   }
   
    
    for (long long i = 0; i < n; i++) {
    for (long long j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            count++;
        }
    }  
	}
	
	cout << count << '\n';
	
	
  }
  return 0;
}

