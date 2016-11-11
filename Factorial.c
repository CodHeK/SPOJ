#include <stdio.h>
int main(void) {
    long long int testc,num,print,ans,i;
    long long int j=5;
	scanf("%lld",&testc);
	for(i=0;i<testc;i++)
	 {
	  scanf("%lld",&num);
	  ans=0;
	  print=num;
	  while(print>0)
	  {
	   print = num/j;
	   ans = ans + print;
	   j=j*5;
	  }
	 printf("%lld\n",ans);
	 j=5;
	 }
	return 0;
}