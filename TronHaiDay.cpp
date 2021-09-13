#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n, k,m;
		cin>>n>>k>>m;
		int a[n+k+1];
		for(int i=0;i<n+k;i++){
			cin>>a[i];
		}
		sort(a,a+n+k);
		for(int i=0;i<n+k;i++){
			cout<<a[i]<<" ";
		}
		cout<<m<<endl;
	}
 	return 0;
}

