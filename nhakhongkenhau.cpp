#include<bits/stdc++.h>
using namespace std;
int n;
void run(){
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n+5];
	b[0]=a[0];
	b[1]= max(a[0],a[1]);
	for(int i=2;i<n;i++){
		b[i]=max(b[i-1],b[i-2]+a[i]);
	}
	cout<<b[n-1];
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		run();
		cout<<endl;
	}
	
 	return 0;
}
