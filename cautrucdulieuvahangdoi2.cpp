#include<bits/stdc++.h>
using namespace std;

void run(){
    int n;
    cin>>n;
    deque <int> que;
    while(n--){
        string choice;
        cin>>choice;
        if(choice=="PUSHFRONT"){
            int n;
            cin>>n;
            que.push_front(n);
        }
        else if(choice=="PRINTFRONT"){
            if(que.size()>0){
                cout<<que.front()<<endl;
            }
            else{
                cout<<"NONE"<<endl;
            }
        }
        else if(choice=="POPFRONT"&&!que.empty()){
            que.pop_front();
        }
        else if(choice=="PUSHBACK"){
            int n;
            cin>>n;
            que.push_back(n);
        }
        else if(choice=="PRINTBACK"){
            if(que.size()>0){
                cout<<que.back()<<endl;
            }
            else{
                cout<<"NONE"<<endl;
            }
        }
        else if(choice=="POPBACK"&&!que.empty()){
            que.pop_back();
        }
    }
    
}
int main(){
    // int T;
    // cin>>T;
    // while(T--){
        run();
    //    cout<<endl;
    //}
    
}