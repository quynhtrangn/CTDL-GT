#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n;
		int a[10001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int l=0;
		int r=n-1;
		while(l<=r){
			cout<<a[r]<<" ";	
			if(r!=l){
				cout<<a[l]<<" ";
			}
			l++;
			r--;
			
		}
		cout<<endl;
		
	}
 	return 0;
}

