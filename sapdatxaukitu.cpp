#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int k;
		int a[1000]={0};
		int len=s.length();
		if(len%n==0){
			k=s.length()/n;
		}
		else{
			k=s.length()/n+1;
		}
		for(int i=0;i<s.length();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]+=(int)('a'-'A');
			}
		}
		for(int i=0;i<s.length();i++){
			a[s[i]]++;
		}
		int ok=0;
		for(int i='a';i<='z';i++){
			if(a[i]>k){
				ok=1;
				cout<<-1<<endl;
				break;	
			} 
		}
		if(ok==0){
			cout<<1<<endl;
		}
	}
 	return 0;
}
