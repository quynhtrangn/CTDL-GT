#include<bits/stdc++.h>
using namespace std;
void show(stack<int> a){
    vector<int> b;
    if(a.size()){
        while(a.size()){
            b.push_back(a.top());
            a.pop();
        }
        for(int i=b.size()-1;i>=0;i--){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"empty"<<endl;
    }
}
void run(){
    string str;
    stack<int> a;
    while(cin>>str){
        if(str=="push"){
            int n;
            cin>>n;
            a.push(n);
        }
        else if(str=="pop"){
            a.pop();
        }
        else{
            show(a);
        }
    }
}
int main(){
    run();
}