#include <iostream>
using namespace std;

int main() {
	
	// your code here
	while(1){
	long long int n;
	cin>>n;
    if(n!=0){
    	cout<<(long long int)((n*(n+1)*((2*n) + 1))/6)<<endl;
    }
    else{
    	break;
    }
	}
	return 0;
}