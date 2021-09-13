#include<bits/stdc++.h>
using namespace std;

void run(){
    int n;
    cin>>n;
    queue <int> que;
    while(n--){
        int choice;
        cin>>choice;
        
        switch (choice)
        {
        case 1:
            cout<<que.size()<<endl;
            break;
        case 2: 
            if(!que.empty()) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            break;
        case 3: 
            int x;
            cin>>x;
            que.push(x);
            break;
        case 4: 
            if(que.size()>0) que.pop();
            break;
        case 5: 
            if(que.size()>0) cout<<que.front()<<endl;
            else cout<<-1<<endl;
            break;
        case 6: 
            if(que.size()>0) cout<<que.back()<<endl;
            else cout<<-1<<endl;
            break;
                        
        default:
            break;
        }
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