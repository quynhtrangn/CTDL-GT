#include<bits/stdc++.h>
using namespace std;
string x[10000];
int n,w;
string a;
void sinh(){
	int len=a.length()-1;
	int i=len-1;
	while(a[i+1]<=a[i]&&i>0) i--;
	if(i<=0){
		cout<<"BIGGEST";
		return;
	}
	int k=len;
	while(a[i]>=a[k]) k--;
	swap(a[i],a[k]);
	sort(a.begin()+i+1,a.end());
	for(int i=0;i<a.length();i++){
		cout<<a[i];
	}
}

void run(){
	int T;
	cin>>T;
	while(T--){
		cin>>w>>a;
		cout<<w<<" ";
		sinh();
		cout<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

