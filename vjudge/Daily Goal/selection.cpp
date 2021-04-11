#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
   long long n;
   cin >> n;
   long long a[n];
   for(long long k=0; k <n; k++){
		cin>> a[k];
	   }
   
	long long j,key;
    
	 long long small;
  for (long long i = 0; i < n-1 ; i++)
  {
    small = i;
    for ( j = i + 1; j < n; j++)
    {

      if (a[j] < a[small])
      {
        small = j;
        
        cout << i << " ";
        //swap values
        int temp = a[i];
        a[i] = a[small];
        a[small] = temp; 
      }
  	}
  }
  
	
	cout <<'\n';
	
	
  }
  return 0;
}


