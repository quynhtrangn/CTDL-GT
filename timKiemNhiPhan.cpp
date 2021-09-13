#include<bits/stdc++.h>
using namespace std;
void bina(int l, int r, int k, int a[]){
	int mid=(l+r)/2;
	if(l>=r){
		cout<<"NO"<<endl;
		return ;
	} 
	if(a[mid]>k) bina(l,mid-1,k,a);
	if(a[mid]==k){
		cout<<mid+1<<endl;
	} 
	if(a[mid]<k) bina(mid+1,r,k,a);
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		bina(0,n,k,a);
	}
 	return 0;
}

