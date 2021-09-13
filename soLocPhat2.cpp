#include<bits/stdc++.h>
using namespace std;
void xuat(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]==1){
			cout<<8;
		}
		else cout<<6;
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
		long tong=0;
		for(int i=1;i<=n;i++){
			tong=tong+pow(2,i);
		}
		int so=1;
		cout<<tong<<endl;
		while(so<=n){
			int a[19];
			
			sinh(so,a);
			so++;
		}
		cout<<endl;
	}
 	return 0;
}

