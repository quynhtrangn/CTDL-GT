#include<bits/stdc++.h>
using namespace std;

void run(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    priority_queue <long long> que;
    long long dem[10000]={0};
    for(int i=0;i<s.length();i++){
        dem[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(dem[s[i]]){
            que.push(dem[s[i]]);
            dem[s[i]]=0;
        }
    }
    while(n>0){
        int tmp=que.top()-1;
        que.pop();
        que.push(tmp);
        n--;
    }
    long long res=0;
    while(que.size()){
        res+=(que.top()*que.top());
        que.pop();
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
