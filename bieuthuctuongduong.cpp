#include<bits/stdc++.h>
using namespace std;

void run(){
    string a;
    cin>>a;
    stack <char> st;
    for(int i=0;i<a.length();i++){
        if(a[i]!=')'){
            st.push(a[i]);
        }
        else{
            string ans="";
            while(!st.empty()&&st.top()!='('){
                ans=st.top()+ans;
                st.pop();
            }
            st.pop();
            if(st.size()>0){
                if(st.top()=='-'){
                    for(int j=0;j<ans.length();j++){
                        if(ans[j]=='+') ans[j]='-';
                        else if( ans[j]=='-') ans[j]='+';
                    }
                    for(int j=0;j<ans.length();j++) st.push(ans[j]);
                }
                if(st.top()=='+'||st.top()=='('){
                    for(int j=0;j<ans.length();j++) st.push(ans[j]);
                }
            }
            else{
                for(int j=0;j<ans.length();j++) st.push(ans[j]);
            }
                
        }
    }
    string s1="";
	while(st.size()!=0)
	{
		s1=st.top()+s1;
		st.pop();
	}
	cout<<s1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
    
}