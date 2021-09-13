#include<bits/stdc++.h>
using namespace std;
void run(){
    string a;
    cin>>a;
    stack <char> st;
    for(int i=0;i<a.length();i++){
        if(st.empty()) st.push(a[i]);
        else if(a[i]=='('){
            st.push(a[i]);
        }
        else if(a[i]==')'){
            if(st.top()=='(') st.pop();
            else st.push(a[i]);
        } 
    }
    vector<char> x;
    while(!st.empty()){
        x.push_back(st.top());
        st.pop();
    }
    int dem1=0;
    int dem2=0;
    for(int i=x.size()-1;i>=0;i--){
        if(x[i]=='(') dem1++;
        else dem2++;
    }
    int kq= dem1/2+dem1%2+dem2/2+dem2%2;
    cout<<kq<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
    }
}