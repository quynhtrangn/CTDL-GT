#include<bits/stdc++.h>
using namespace std;

void run(){
    string s;
    cin>>s;
    stack<char> st;
    string ans="";
    string res="";
    //st.push('#');
    stack<int> dem;
    dem.push(0);
    int dd=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['||(s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')){
            st.push(s[i]);
            if(s[i]=='['){
                dem.push(dem.top()+1);
            } 
        }
        else if(s[i]==']'){ //3[b2[ca]]
            while(!st.empty()&&st.top()!='['){
                if(dem.top())
                ans=st.top()+ans;
                st.pop();
            }
            st.pop();
            int n=0;  // 123
            int j=0;
            while(!st.empty()&&st.top()>='0'&&st.top()<='9'){
                n=(int)(st.top()-'0')*pow(10,j)+n;
                j++;
                st.pop();
            } 
            res="";
            for(j=0;j<n;j++) res = ans+res;
            ans= res;
        }
    }
    while(!st.empty()){
        res= st.top()+res;
        st.pop();
    }
    cout<<res<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
    }
}