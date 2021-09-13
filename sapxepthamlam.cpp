#include<bits/stdc++.h>
using namespace std;

void run(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n+1];
		int b[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int ok=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i] && a[i]!=b[n-i-1]){
				cout<<"No"<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"Yes"<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

