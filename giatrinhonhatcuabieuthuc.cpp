#include<bits/stdc++.h>
using namespace std;
long long n;
long long *a;
long long *b;
void init(){
	cin>>n;
	a= new long long [n+5];
	b= new long long [n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
}
bool cmp(long long x, long long y){
	return x>y;
}
void xuat(){
	sort(a,a+n);
	sort(b,b+n,cmp);
	long long s=0;
	for(long long i=0;i<n;i++){
		s=s+a[i]*b[i];
	}
	cout<<s;
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

