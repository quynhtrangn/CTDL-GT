#include<bits/stdc++.h> // 1 2 3  4  5 6
using namespace std;
int n,k;
int a[100];
void handle(){
	
}
void run(){
	
}
int main()
{
	int T=1;
	cin>>T;
	while(T--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long tong1=0;
		long tong2=0;
		if(k<n-k){
			for(int i=0;i<k;i++){
				tong1+=a[i];
			}
			for(int i=k;i<n;i++){
				tong2+=a[i];
			}
			cout<<tong2-tong1<<endl;
		}
		else{
			for(int i=0;i<n-k;i++){
				tong1+=a[i];
			}
			for(int i=n-k;i<n;i++){
				tong2+=a[i];
			}
			cout<<tong2-tong1<<endl;
		}
		
	}
 	return 0;
}
