#include<bits/stdc++.h>
using namespace std;
long n;
long a[100009];

void init(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
}
void xuat(){
	sort(a,a+n);
	long long mul[4];
	mul[0]=a[0]*a[1];
	mul[1]=a[0]*a[1]*a[n-1];
	mul[2]=a[n-2]*a[n-1];
	mul[3]=a[n-3]*a[n-2]*a[n-1];
	sort(mul,mul+4);
	cout<<mul[3];
}
void run(){
//	int T;
//	cin>>T;
//	while(T--){
		init();
		xuat();
		cout<<endl;
//	}
}
int main()
{
	run();
 	return 0;
}

