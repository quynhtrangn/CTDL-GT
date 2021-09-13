#include<bits/stdc++.h>
using namespace std;

void handle(){
	int n,m,k;
	cin>>n;
	int a[2]={0};
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		a[tmp]++;	
	}
	cout<<a[0];
	cout<<endl;
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
