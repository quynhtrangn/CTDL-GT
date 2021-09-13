#include<bits/stdc++.h>
using namespace std;
int check(int a[]){
	for(int i=0;i<10;i++){
		if(a[i]==0) return 0;
	}
	return 1;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[10]={0};
		string s;
		for(int i=0;i<n;i++){
			cin>>s;
			if(check(a)==0){
				for(int i=0;i<s.length();i++){
					int tmp=(int)(s[i]-'0');
					a[tmp]++;
				}	
			}
		}
		for(int i=0;i<10;i++){
			if(a[i]>0) cout<<i<<" ";
		}
		cout<<endl;
		
	}
 	return 0;
}

