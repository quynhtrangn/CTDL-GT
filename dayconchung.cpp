#include<bits/stdc++.h>
using namespace std;
long n,m,k;
long a[100009];
long b[100009];
long c[100009];
void init(){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<k;i++){
		cin>>c[i];
	}
	
	
}
void xuat(){
	int ok=0;
	long i=0 , j=0, h=0;
	while(i<n&&j<m&&h<k){
		if(a[i]==b[j]&&a[i]==c[h]){
			cout<<a[i]<<" ";
			i++; j++; h++;
			
			ok=1;
		}
		else if(a[i]>b[j]) j++;
		else if(a[i]>c[h]) h++;
		else i++;
	}
	if(ok==0) cout<<"NO";
}
void run(){
	int T;
	cin>>T;
	while(T--){
		init();
		xuat();
		cout<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

