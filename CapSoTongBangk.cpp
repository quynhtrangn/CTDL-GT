#include<bits/stdc++.h>
using namespace std;
bool bina_search(int l, int r, int val,int a[]){
	while(l<=r){
		int mid=(r+l)/2;
		if(a[mid]==val) return true;
		else if( a[mid]>val) r=mid-1;
		else l=mid+1;
	}
	return false;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int a[10001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n-1;i++){ // 1 1 2 4 5
			if(a[i]>k) break;
			else{
				int tmp=k-a[i];
				int minn= lower_bound(a+i+1,a+n,tmp)-a;
				int maxx= upper_bound(a+i+1,a+n,tmp)-a;
				dem+=(maxx-minn);
			}	
			
		}
		cout<<dem<<endl;
		
	}
 	return 0;
}

