#include<bits/stdc++.h>
using namespace std;
int a[1000];
int n,k;
int x[1001];
int res;
bool check(){
	for(int i=1;i<k;i++){
		if(a[x[i]]>a[x[i+1]]) return false;
	}
	return true;
}
void sinh(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			if(check()){
				res++;
//				for(int z=1;z<=k;z++) cout<<a[x[z]];
//				cout<<" ";
			}
		}
		else{
			sinh(i+1);	
		}
		
	}
}
void run(){
//	int T;
//	cin>>T;
//	while(T--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		x[0]=0;
		res=0;
		sinh(1);
		cout<<res;
	//	cout<<endl;
	//}
}
int main()
{
	run();
 	return 0;
}

