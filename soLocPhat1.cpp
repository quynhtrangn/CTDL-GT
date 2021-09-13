#include<bits/stdc++.h>
using namespace std;
void xuat(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]==1){
			cout<<6;
		}
		else cout<<8;
	}
	cout<<" ";
}
void sinh(int n, int a[]){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	int i=n-1;
	while(1){// 00000
		xuat(a,n);
		i=n-1;
		while(a[i]==1&&i>=0)i--;
		if(i<0) break;
		a[i]=1;
		for(int j=i+1;j<n;j++){
			a[j]=0;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		n=n+1;
		while(n--){
			int a[19];
			sinh(n,a);
		}
		cout<<endl;
	}
 	return 0;
}

