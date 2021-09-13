#include<bits/stdc++.h>
using namespace std;
string x[10000];
int n;
string a;
void gray(){
	char b[100];
	b[0]=a[0];
	for(int i=1;i<a.length();i++){
		if(a[i]=='0'){
			b[i]=b[i-1];
		}
		else{
			if(b[i-1]=='0'){
				b[i]='1';
			}else{
				b[i]='0';
			}
		}
	}
	//cout<<" trang day";
	for(int i=0;i<a.length();i++){
		cout<<b[i];
	}
}
void run(){
	int T;
	cin>>T;
	while(T--){
		cin>>a;
		gray();
		cout<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

