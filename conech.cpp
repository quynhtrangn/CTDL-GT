#include<bits/stdc++.h>
using namespace std;
int n;

void run(){
	cin>>n;
	long a[n+5]={0};
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=min(i,3);j++){
			a[i]+=a[i-j];
		}
	}
	cout<<a[n];
}
int main()
{	int T;
	cin>>T;
	while(T--){
		run();
		cout<<endl;
	}
	
 	return 0;
}

