#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;
typedef uint32_t ui;

void printOneToN(int N)
{
  	// Your Code Here
  	int i = 0;
  	if(N == i){
      cout << i << " ";
      i++;
    }
  printOneToN(N-1);
  cout << "\n";
}

int main(){
    int n;
    cin >> n;
    
    printOneToN(n);
    
    
    return 0;
}

