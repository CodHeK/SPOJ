#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	// your code here
	int testc;
	cin>>testc;
	while(testc--){
		int N,i=0,j=0,sum=0;
		cin>>N;
		int b[N],g[N];
		while(i<N){
			cin>>b[i];
			i++;
		}
		sort(b,b+N);
		while(j<N){
			cin>>g[j];
			j++;
		}
		sort(g,g+N);
		for(int k=0;k<N;k++){
			sum = sum + (b[k]*g[k]);
		}
		cout<<sum<<endl;
	}

	return 0;
}