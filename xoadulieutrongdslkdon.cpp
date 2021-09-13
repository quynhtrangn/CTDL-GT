#include<bits/stdc++.h>
using namespace std;

void handle(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int xoa; cin>>xoa;
	for(int i=0;i<n;i++){
		if(a[i]!=xoa) cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
//	int T;
//	cin>>T;
//	while(T--){
		handle();
//		cout<<endl;
//	}
 	return 0;
}

