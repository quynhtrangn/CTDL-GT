#include<bits/stdc++.h>
using namespace std;
string sign="+-*/";
bool Check(char x){
    for(int i=0;i<sign.length();i++){
        if(x==sign[i]) return true;
    }
    return false;
}
void run(){
    string a;
    cin>>a;
    stack<string> s;
    for(int i=0;i<a.length();i++){
        if(Check(a[i])){
            string tmp=a[i]+s.top();
            s.pop();
            tmp= s.top()+tmp;
            tmp='('+tmp+')';
            s.pop();
            s.push(tmp);
        }
        else{
            string tmp="";
            tmp=+a[i];
            s.push(tmp);
        }
    }
    vector <string> kq;
    cout<<s.top();
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
    cerr<<"trang";
}