#include<bits/stdc++.h>
using namespace std;
long a[100005];
long L[100005];
long R[100005];
void run(){
    int n;
    cin>>n;
    stack<int> st;
    a[0]=0;
    a[n+1]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        L[i]=0;
        R[i]=0;
    }
    
    st.push(0);
    for(int i=1;i<=n;i++){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        L[i]=st.top()+1;
        st.push(i);
    }
    
    while(!st.empty()){
        st.pop();
    }
    st.push(n+1);
    for(int i=n;i>=1;i--){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        R[i]=st.top()-1;
        st.push(i);
    }
    
    long maxx=0;
    for(int i=1;i<=n;i++){
        maxx= max(maxx, (R[i]-L[i]+1)*a[i]);
    }
    cout<<maxx;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}