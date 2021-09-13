#include<bits/stdc++.h>
using namespace std;
int k;
string s;
void handle(){
	cin>>k>>s;
	for(int i=0;i<s.length();i++){ 
		int dd=s.length()-1;
		char tmpE= s[s.length()-1];
		for(int j=s.length()-1;j>i;j--){
			if(k<=0) break;
			if(tmpE<s[j]){
				tmpE=s[j];
				dd=j;
			}
		}
		if(tmpE>s[i]&&k>0){
			swap(s[i],s[dd]);
			k--;
		}
		
	}
	cout<<s;
}
void run(){
	int T=1;
	cin>>T;
	while(T--){
		handle();
		cout<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

