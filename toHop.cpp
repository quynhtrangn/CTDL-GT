#include<bits/stdc++.h>
using namespace std;
const long long mod=(1e9+7);
long long mang[1005][1005];
int n,k;
void tohop(){
	for(int i=0;i<1005;i++){
		for(int j=0;j<=i;j++){ 
			if(i==j||j==0) mang[i][j]=1;
			else mang[i][j]=mang[i-1][j]+mang[i-1][j-1];
			mang[i][j]%=mod;
		}
	}
}

void handle(){
	
	cin>>n>>k;
	cout<<mang[n][k];
    cout << endl;
}
int main()
{	
	int T=1;
	cin>>T;
	tohop();
	while(T--){
		handle();
	}
 	return 0;
}

