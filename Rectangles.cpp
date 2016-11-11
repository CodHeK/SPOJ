#include <iostream>
using namespace std;

int main() {
	
	int n,sum=0;
	cin>>n;
	for(int i=1;i*i<=n;i++){
		sum = sum + (int)(n/i) - i + 1;
	}
	cout<<sum<<endl;
		

	return 0;
}