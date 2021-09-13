#include<bits/stdc++.h>
using namespace std;
int n,s,p;
int a[400];
int s[100];
void sang(){
	for(int i=0;i<400;i++){
		a[i]=1;
	}
	a[0]=0;
	a[1]=0;
	for(int i=2;i<400;i++){
		if(a[i]){
			for(int j=i*2;j<400;j+=i){
				a[j]=0;
			}
		}
	}
}
void Try(int i, int sum){
	for(int j=p;j<s;j++){
		if(a[j]){
			s[i]=j;
			if(i==n){
				if(sum==s){
					for(int l=1;l<n;l++) cout<<s[l]<<" ";
					cout<<endl;
				}
			}
		}
	}
}
void run(){
	cin>>s>>p>>n;
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		run();
		cout<<endl;
	}
	
 	return 0;
}
