#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[1000];
void handle(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int tong1=0,tong2=0;
	if(k>n-k){
		k=n-k;
	}
	for(int i=0;i<n;i++){
		if(i<k){
			tong1+=a[i];
		}
		else tong2+=a[i];
	}
	cout<<tong2-tong1;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        handle();
        cout<<endl;
    }
}
