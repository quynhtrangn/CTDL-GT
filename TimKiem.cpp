#include<bits/stdc++.h>
using namespace std;
void bina_search(int l, int r, int val,int a[]){
	int mid=(l+r)/2;
	if(l>r){
		cout<<-1;
		return;
	} 
	if(a[mid]==val){
		cout<<1;
	}
	if(a[mid]>val) bina_search(l,mid-1,val,a);
	if(a[mid]<val) bina_search(mid+1,r,val,a);
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		bina_search(0,n,x,a);
		cout<<endl;
	}
 	return 0;
}

