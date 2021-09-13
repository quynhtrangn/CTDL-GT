#include<bits/stdc++.h>
using namespace std;

void handle(){
	stack<int> vtr;
	string s;
	cin>>s;
	vtr.push(-1);
	int res=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			vtr.push(i);
		}
		else {
			vtr.pop();
			if(!vtr.empty()){
				res= max(res, i - vtr.top());
			}
			if (vtr.empty()) vtr.push(i);
			
		}
	}
	cout<<res<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		handle();	
	}
 	return 0;
}

