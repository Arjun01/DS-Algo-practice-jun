/** Candy I
 * 
 * **/
 
 
#include <iostream>

#include <cstdio>

using namespace std;


int main(void) {

long long i,j,k,n,sum,a[100001],less,more;

while(1)

{

      scanf("%lld",&n);

//n==-1 indicates the end of the input or values 

      if(n==-1)

      break;

//Initialize less , more and sum with "0" 

      less=0;

      more=0;

      sum=0;

      for(i=1;i<=n;i++)

      {

            scanf("%lld",&a[i]);

      }

      for(i=1;i<=n;i++)

      sum=sum+a[i];

      sum=sum/n;

//sum here indicates number of candies that should be

//there in each packets from here after 

      for(i=1;i<=n;i++)

      {

//calculating more and less as mentioned in our explanation 

            if(a[i]<sum)

            less+=(sum-a[i]);

            else

            more+=(a[i]-sum);

      }

//Incase less and more are not equal then we can't



// keep equal number of candies in all packets

//according to given input otherwise print the output 

      if(less!=more)

      printf("-1\n");

      else

      printf("%lld\n",more);

      

      

}

        return 0;

}
