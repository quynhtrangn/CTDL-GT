#include<bits/stdc++.h>
using namespace std;

void handle(){
	long long n1,n2,n3;
	cin>>n1>>n2>>n3;
	long long a[n1+1],b[n2+1],c[n3+1];
	for(long long i=0;i<n1;i++){
		cin>>a[i];
	}
	for(long long i=0;i<n2;i++){
		cin>>b[i];
	}
	for(long long i=0;i<n3;i++){
		cin>>c[i];
	}
	bool ok=false;
	long long i1=0,i2=0,i3=0;
	while(i1<n1&&i2<n2&&i3<n3){
		if(a[i1]==b[i2]&&a[i1]==c[i3]){
			cout<<a[i1]<<" ";
			ok=true;
			i1++; i2++; i3++;
		} 
		else if(a[i1]>b[i2]) i2++;
		else if(a[i1]>c[i3]) i3++;
		else{
			i1++;
		}
	}
	if(ok==false) cout<<-1;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		handle();
		cout<<endl;
	}
 	return 0;
}

