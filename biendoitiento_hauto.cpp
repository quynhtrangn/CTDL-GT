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
    for(int i= a.length()-1;i>=0;i--){
        if(Check(a[i])){
            string tmp=s.top();
            s.pop();
            tmp+=s.top();
            s.pop();
            tmp+=a[i];
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