#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1009][2];
long long b[1009][2];
void run(){
 	cin>>n;
 	char x;
	long long l[n+1]={0};
	for (int i=0;i<n;i++) {
		cin>>a[i][0]>>a[i][1]>>x;
	}
	cin>>m;
	int dem=0;
	for (int i=0;i<m;i++) {
		cin>>b[i][0]>>b[i][1]>>x;
		if (a[i][0]==b[i][0]&&a[i][1]==b[i][1]) dem++;
	}
	if (n!=m) cout<<0;
	else{
		if (dem==n) cout<<1;
		else cout<<0;
	}
		
		
}
int main(){
    int T;
    cin>>T;
    while(T--){
    	run();
    	cout<<endl;
    }
    return 0;
}

