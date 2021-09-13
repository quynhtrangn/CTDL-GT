#include<bits/stdc++.h>
using namespace std;
stack<int> st;
void show(stack <int> a){
    vector<int> b;
    if(a.size()){
        cout<<a.top();  
    }
    else if(a.size()==0){
        cout<<"NONE";
    }
    cout<<endl;

}
void run(){
    string a;
    cin>>a;
    
    if(a=="PUSH"){
        int n;
        cin>>n;
        st.push(n);
    }
    else if(a=="POP"&&!st.empty()){
        st.pop();
    }
    else if(a=="PRINT"){
        show(st);
    }
    
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
    }
}