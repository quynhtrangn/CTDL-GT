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
    stack<char> st;
    vector<int> kq;
    for(int i=0;i<a.length();i++){
        if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')){
            cout<<a[i];
        }
        else if(a[i]=='('){
            st.push(a[i]);
        }
        else if(a[i]==')'){
            while(!st.empty()&&st.top()!='('){
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty()&&com(a[i])<=com(st.top())){
                cout<<st.top();
                st.pop();
            }
            st.push(a[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}