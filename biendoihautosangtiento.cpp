#include<bits/stdc++.h>
using namespace std;
string sign="+-*/";
bool check(char a){
    for(int i=0;i<sign.length();i++){
        if(a==sign[i]) return true;
    }return false;
}
int com(char a){
    if(a=='^') return 3;
	if(a=='*'||a=='/') return 2;
	if(a=='+'||a=='-') return 1;
	return 0; 
}
void run(){
    string a;
    cin>>a;
    stack<string> st;
    string ans="";
    for(int i=0;i<a.length();i++){
       if(check(a[i])){
           string tmp=st.top();
           st.pop();
           tmp=a[i]+st.top()+tmp;
           st.pop();
           st.push(tmp);
       }
       else{
           string tmp="";
           tmp+=a[i];
           st.push(tmp);
       }
    }
    cout<<st.top();
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}