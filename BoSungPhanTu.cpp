#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[10000];
		int b[100001]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		int dem=0;
		int minn= *min_element(a,a+n);
		int maxx= *max_element(a,a+n);
		for(int i=minn;i<=maxx;i++){
			if(b[i]==0) dem++;
		}
		cout<<dem<<endl;
		
	}
 	return 0;
}

