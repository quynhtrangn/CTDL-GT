#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
bool ktra(){
	if(a[1]==0) return false;
	if(a[n]==1) return false;
	for(int i=1;i<n;i++){
		if(a[i]==a[i+1]&&a[i]){
			return false;
		}
	}
	return true;
}
void sinh(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(ktra()){
				for(int k=1;k<=n;k++){
					if(a[k]) cout<<"H";
					else cout<<"A";
				}
				cout<<endl;
			}
		}
		else sinh(i+1);
	}
}
void run(){
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		sinh(1);
	}
}
int main()
{
	run();
 	return 0;
}

