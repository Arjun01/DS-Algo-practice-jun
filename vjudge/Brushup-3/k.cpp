
#include<bits/stdc++.h>
using namespace std;

int main() {

        long long  int i,n,a,b;
		cin>>n;
		for( i=0;i<n;i++){
			cin>>a>>b;
		long long int mod = b%4;
		long long int po = a%10;
		if(b==0) cout<<"1"<<endl;
		else if(a==0) cout<<"0"<<endl;
		else if(po==1||po==5||po==6||po==0) cout<<po<<endl;
        else{if(mod==1){
               cout<<(po%10);
            }else if(mod==2){
               cout<<((po*po)%10);
            }else if(mod==3) {
               cout<<((po*po*po)%10);
            }
            else{
               cout<<((po*po*po*po)%10);
            }
            cout<<endl;
        }

    }
    
    return 0;

} 
