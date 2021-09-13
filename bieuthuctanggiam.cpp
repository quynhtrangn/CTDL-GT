#include<bits/stdc++.h>
using namespace std;
string sign="+-*/";
bool check(string s, string ans){
    for(int i=0;i<s.length();i++){
        if(s[i]=='I'&&ans[i]>ans[i+1]) return false;
        if(s[i]=='D'&&ans[i]<ans[i+1]) return false;
    }
    return true;
}
void run(){
    string a;
    cin>>a;
    string ans="";
    for(int i=1;i<=a.length()+1;i++){
        ans=ans+(char)(i+'0');
    }
    do{
        if(check(a, ans)){
            cout<<ans;
            break;
        }
    }
    while(next_permutation(ans.begin(),ans.end()));
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
    
}