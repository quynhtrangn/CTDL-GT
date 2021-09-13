#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
	int T;
	cin>>T;
	while(T--){
		cin>>s;
		int a[300]={0};
		int len= s.length();
		for(int i=0;i<s.length();i++){
			a[s[i]]++;
		}
		int max_val=0;
		for(int i=0;i<300;i++){
			max_val= max(max_val,a[i]);
		}
		if(len%2==0){
			if(max_val>(len/2)) cout<<-1;
			else{
				cout<<1;
			}
		}
		else{
			if(max_val>(len/2)+1){
				cout<<-1;
			}
			else{
				cout<<1;
			}
		}
		cout<<endl;
	}
 	return 0;
}
