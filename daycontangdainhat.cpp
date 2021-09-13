#include<bits/stdc++.h>
using namespace std;
int n;

void run(){
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxx=1;
	int b[10000]={0};
	for(int i=0;i<n;i++){
		b[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j]) b[i]= max(b[i],b[j]+1);
		}
		maxx=max(b[i],maxx);
	}
	cout<<maxx;
}
int main()
{
	run();
 	return 0;
}

