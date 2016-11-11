#include <iostream>
#define M 10
using namespace std;
long long int power(long long int a,long long int b){
	if(a==0){
		return 0;
	}
	if(a==1 || b==0){
		return 1;
	}
	if(b==1){
		return a;
	}
	else{
		 if(b%2==0){
		 	return ((power(a,b/2)%M)*(power(a,b/2)%M)%M);
		 }
		 else{
		 	return (((((power(a,b/2))%M)*((power(a,b/2))%M))%M *(a%M))%M);
		 }
	}
}

int main() {
	 int testc;
	 cin>>testc;
	 while(testc--){
	 	long long int m,n;
	 	cin>>m>>n;
	 	cout<<((power(m,n))%M)<<endl;
	 }
	return 0;
}