#include<bits/stdc++.h>
using namespace std;

void run(){
    int n;
    cin>>n;
    deque <int> st;
    vector <string> ss;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ss.push_back(s);
    }

    for(int i=ss.size()-1;i>=0;i--){
        if(ss[i]=="+"||ss[i]=="-"||ss[i]=="*"||ss[i]=="/"){
            int res=0;
            int s1=st.back();
            st.pop_back();
            int s2= st.back();
            st.pop_back();

            if(ss[i]=="+") res= s2+s1;
            else if(ss[i]=="-") res= s2-s1;
            else if(ss[i]=="*") res= s2*s1;
            else res= s2/s1;
            st.push_front(res);
        }else{
            string tmp=ss[i];
            int res=0;
            for(int i=0;i<tmp.length();i++){
                res= res*10+(int)(tmp[i]-'0');
            }
            st.push_front(res);
        }
    }
    cout<<st.front();
}

int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}