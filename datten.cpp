#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10000];
void sinh(int i){
	for(int j= a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int x=1;x<=k;x++){
				cout<<(char)('A'+a[x]-1);
			}
			cout<<endl;
		}
		else{
			sinh(i+1);
		}
	}
	
}
void run(){
	int T;
	cin>>T;
	while(T--){
		cin>>n>>k;
		a[0]=0;
		sinh(1);
	}
}
int main()
{
	run();
 	return 0;
}

