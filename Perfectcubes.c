#include <stdio.h>

int main(void) {
	// your code here
    long int h,i,j,k;
    for(h=6;h<=100;h++){
    	for(i=2;i<h;i++){
    		for(j=i;j<h-1;j++){
    			for(k=j;k<h;k++){
    				if(i!=j && j!=k && ((i*i*i + j*j*j + k*k*k) == h*h*h) && i<j && j<k){
    					printf("Cube = %ld, Triple = (%ld,%ld,%ld)\n",h,i,j,k);
    				}
    			}
    		}
    	}
    }
	return 0;
}