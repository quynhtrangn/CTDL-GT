#include<bits/stdc++.h>
using namespace std;
void run(string s){ // 1110011 1110100   110 111   1110 1111 
    int i=s.length()-1;
    while(i>0&&s[i]!='1') i--;
    s[i]='0';
    for(int j=i+1;j<s.length();j++) s[j]='1';
    cout<<s;
}
bool isf(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') return false;
    }
    return true;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        getline(cin,s);
        if(isf(s)){
            for(int i=0;i<s.length();i++) cout<<1;
        }
        else run(s);
        cout<<endl;
    }
}