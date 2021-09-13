#include<bits/stdc++.h>
using namespace std;
void handle(){
    string str;
    cin>>str;
    stack <char> a;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('||str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
            a.push(str[i]);
        }
        if(str[i]==')'){
            if(a.top()=='('){
                cout<<"Yes";
                return;
            }
            else{
                while(a.top()!='('&&a.size()){
                    a.pop();
                }
                a.pop();
            }
        }
         
    }
    cout<<"No"; 
}
void run(){
    int T;
    cin>>T;
    while(T--){
        handle();
        cout<<endl;
    }
    
}
int main(){
    run();
}