/*Grading Students
 * 
 * **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    

	int n;
	cin >> n;
	int grades[n];
	for(int i=0 ; i <n; i++){
			int specialNum = 0;
			cin >> grades[i];
			if(grades[i] >= 38){
					specialNum = grades[i] % 10;
					if(specialNum == 3 || specialNum == 8){
						grades[i] += 2;
							
						}else if(specialNum == 4 || specialNum == 9){
							grades[i]++;
							
						}
			}
			cout<< grades[i]<< '\n';
	}
	
	

  return 0;
}
 
