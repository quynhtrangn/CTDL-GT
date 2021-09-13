#include<bits/stdc++.h>
using namespace std;

void handle(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[n+m];
	for(int i=0;i<n+m;i++){
		cin>>a[i];	
	}

	sort(a,a+m+n);
	cout<<a[k-1];
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
