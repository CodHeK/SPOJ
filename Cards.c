#include <stdio.h>

int main(void) {
	// your code here
    long long int testc,i,n,ans;
    scanf("%lld",&testc);
    for(i=0;i<testc;i++)
     {
      scanf("%lld",&n);
      ans = n*((3*n)+1)/2;
      printf("%lld\n",ans%1000007);
     }
    
	return 0;
}