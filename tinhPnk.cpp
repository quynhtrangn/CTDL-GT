#include<bits/stdc++.h>
using namespace std;
int n,k;
void run(){
	cin>>n>>k;
	long long res=1;
	for(int i=n-k+1;i<=n;i++){
		res*=i;
		res%=(1000000007); //1e9+7
	}
	cout<<res;
}
int main()
{	int T;
	cin>>T;
	while(T--){
		run();
		cout<<endl;
	}
	
 	return 0;
}

