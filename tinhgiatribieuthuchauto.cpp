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
    stack<int> s;
    for(int i= 0;i<a.length();i++){
        if(Check(a[i])){
            int tmp2=s.top();
            s.pop();
            int tmp1=s.top();
            s.pop();
            if(a[i]=='+') s.push(tmp1+tmp2);
            else if(a[i]=='-') s.push(tmp1-tmp2);
            else if(a[i]=='*') s.push(tmp1*tmp2);
            else if(a[i]=='/') s.push(tmp1/tmp2);
            
        }
        else{
            s.push((int)(a[i]-'0'));
        }
    }
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