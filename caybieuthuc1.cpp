#include<bits/stdc++.h>
using namespace std;
string op="+-*/";
bool isOp(char a){
    for(int i=0;i<op.length();i++){
        if(a==op[i]){
            return 1;
        }
    }
    return 0;
}
void run(){
    string s;
    cin>>s;
    stack<string>st;
    for(int i=0;i<s.length();i++){
        if(isOp(s[i])){
            string tmp="";
            tmp=s[i]+ st.top();
            st.pop();
            tmp=st.top()+tmp;
            st.pop();
            st.push(tmp);
        }else{
            string tmp="";
            tmp+=s[i];
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