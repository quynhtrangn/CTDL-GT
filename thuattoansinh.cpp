#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
//void check(){
//	for(int )
//}
void xuat(int n1){
	for(int i=0;i<n1;i++){
		cout<<a[i]<<" ";
	}
	
	if(n%2==0){
		for(int i=n1-1;i>=0;i--){
			cout<<a[i]<<" ";
		}
	}
	else{
		for(int i=n1-2;i>=0;i--){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
void sinh(int n1){
	
	for(int i=0;i<n1;i++){
		a[i]=0;
	}
	int i=n1-1;
	while(1){
		xuat(n1);
		i=n1-1;
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
	cin>>n;
	int n1;
	if(n%2==0) n1=n/2;
	else{
		n1=(n/2)+1;
	}
	sinh(n1);
 	return 0;
}

