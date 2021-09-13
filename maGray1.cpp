#include<bits/stdc++.h>
using namespace std;
string x[10000];
int n;
void gray(){
	x[1]="0";
	x[2]="1";
	int t=2;
	for(int i=2;i<=n;i++){
		int k = 1<<i;
		for(int j=1;j<=t;j++){
			x[k-j+1]="1"+x[j];
			x[j]="0"+x[j];
		}
		t=k;
	}
	for(int i=1;i<=(1<<n);i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void sinh(){
	x[1]="0";
	x[2]="1";
	int t=2;
	for(int i=2;i<=n;i++){
		int l=1<<i;
		for(int j=1;j<=t;j++){
			x[l-j+1]='1'+x[j];
			x[j]='0'+x[j];
		}
		t=l;
	}
	for(int i=1;i<=(1<<n);i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		sinh();
	}
 	return 0;
}

