#include<bits/stdc++.h>
using namespace std;

void run(){
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++){
        if(n[i]>'1'){
            n[i]='1';
            for(int j=i+1;j<n.length();j++) n[j]='1';
            break;
        }
    }
    long long res=0;
    int x=0;// 100
    for(int i=n.length()-1;i>=0;i--){
        res=res+(n[i]-'0')*pow(2,x);
        x++;
    }
    cout<<res;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
    
}