#include <stdio.h>

int main(void) {
	int testc,i;
	long long int sum=0;
	scanf("%d",&testc);
	int n[testc];
	for(i=0;i<testc;i++)
	 {
	  scanf("%d",&n[i]);
	 }
	 for(i=0;i<testc;i++)
	  {
	  	if(n[i]>0)
	  	 {
	  	  sum = sum + n[i];
	  	 }
	  }
    printf("%lld",sum);
	return 0;
}