#include<bits/stdc++.h>
using namespace std;
string a;
void sinh(){
	int len=a.length()-1;
	int i=len;
	while(a[i]=='0'&&i>=0)i--;
	if(i<0) {
		for(int i=0;i<=len;i++){
			cout<<1;
		}
		return;
	}
	a[i]='0';
	for(int j=i+1;j<=len;j++) a[j]='1';
	for(int i=0;i<=len;i++){
		cout<<a[i];
	}
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		cin>>a;
		sinh();
		cout<<endl;
	}
 	return 0;
}

