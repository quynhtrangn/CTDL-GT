#include<bits/stdc++.h>
using namespace std;
void run(){
    string s;
    cin>>s;
    stack<int> st;
    st.push(-1);
    int dem=0;
    for(int i=0;i<s.length();i++){ // (() -1 0 1 2
        if(s[i]=='('){
            st.push(i);
        }
        else{
            st.pop();
            if(s[i]==')'){
               dem= max(dem, i-st.top());
            }
            if(st.empty()) st.push(i); 
        }
    }
    cout<<dem<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
    }
}