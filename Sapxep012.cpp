#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[3]={0};
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			if(tmp==0) cout<<0<<" ";
			else{
				a[tmp]++;
			}
		}
		for(int i=0;i<a[1];i++) cout<<1<<" ";
		for(int i=0;i<a[2];i++) cout<<2<<" ";
		cout<<endl;
		
	}
 	return 0;
}

