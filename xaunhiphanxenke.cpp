#include<bits/stdc++.h>
using namespace std;

void run(){
//	int T;
//	cin>>T;
//	while(T--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			if(i%2==0) cout<<0<<" ";
			else cout<<1<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			if(i%2==1) cout<<0<<" ";
			else cout<<1<<" ";
		}
	}
//}
int main()
{
	run();
 	return 0;
}

