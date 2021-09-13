#include<bits/stdc++.h>
using namespace std;

void run(){
    int a[100005];
    int n;
    cin>>n;
    stack<int> st;
    vector<int> kq;;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    kq.push_back(-1);
    st.push(a[n-1]);
    for(int i=n-2;i>=0;i--){
        while(!st.empty()&&a[i]>=st.top()){
            st.pop();
        }
        if(st.empty()) kq.push_back(-1);
        else{
            kq.push_back(st.top());
        }
        st.push(a[i]);
    }
    for(int i=kq.size()-1;i>=0;i--){
        cout<<kq[i]<<" ";
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