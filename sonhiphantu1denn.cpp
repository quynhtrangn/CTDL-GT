
#include<bits/stdc++.h>
using namespace std;

void run(){
    int n;
    cin>>n;
    deque <int> que;
    int x=1;
    int val=n;
    for(int i=1;i<=val;i++){
        n=i;
        while(n!=0){
            x=n%2;
            que.push_back(x);
            n/=2;
        }
        while(que.size()){
            cout<<que.back();
            que.pop_back();
        } 
        cout<<" ";
    }
    
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
    
}