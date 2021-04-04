#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int containsDuplicate(int nums[])
{

    while(nums[nums[0]] != nums[0]){
    
    nums[nums[0]], nums[0] = nums[0], nums[nums[0]];
    
	}
	return nums[0];
}


int main()
{
	ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int arr[3];
	cin>>arr[0]>>arr[1]>>arr[2];
	
	cout<< containsDuplicate(arr);
	 
	//if(containsDuplicate(arr)){
	//	cout<< "YES";
//	}else {
//		cout << "NO";
//	}
	 
	
 
   return 0;

}

