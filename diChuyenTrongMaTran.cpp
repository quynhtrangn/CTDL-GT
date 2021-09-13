#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int n,m;

void run(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		a[i][1]=1;
	}
	for(int i=1;i<=m;i++){
		a[1][i]=1;
	}
	a[1][1]=0;
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<a[n][m];
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

