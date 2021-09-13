#include<bits/stdc++.h>
using namespace std;

void handle(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
	int minn=1000000;
	for(int i=0;i<n-1;i++){// -8 -66 -60
		for(int j=i+1;j<n;j++){
			int tong=a[i]+a[j];
			//cout<<tong;
			if(abs(tong)<abs(minn)) minn=tong;
		}
	}
	cout<<minn<<endl;
}
int main()
{	
	int T=1;
	cin>>T;
	while(T--){
		handle();
	}
 	return 0;
}
