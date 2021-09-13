#include<bits/stdc++.h>
using namespace std;
string x[10000];
int n;
string a;
char cong(char a, char b){
	if((a=='1'&&b=='0') || (a=='0'&&b=='1')) return '1';
	return '0';
}
void gray(){
	char b[100];
	b[0]=a[0];
	for(int i=1;i<a.length();i++){
		b[i]=cong(a[i-1],a[i]);
	}
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

