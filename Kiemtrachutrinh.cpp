//#include<bits/stdc++.h>
//using namespace std;
//int V, E;
//vector<bool> chuaxet;
//vector<int> ke[1001];
//vector<int> pre;
//bool ok=0;
//void DFS(int u)
//{
//    chuaxet[u]=false;
//    for(int i=0; i<ke[u].size(); i++)
//    {
//        if (ok) return;
//        int v=ke[u][i];
//        if(v==pre[u]) continue;
//        if(chuaxet[v])
//        {
//            pre[v]=u;
//            DFS(v);
//        }
//        else
//        {
//            ok=1;
//            cout<<"YES";
//            return;
//        } 
//    }
//}
//void Reset()
//{
//    ok=0;
//    for(int i=0;i<=1000;i++){
//    	ke[i].clear();
//	}
//    chuaxet.clear();
//    pre.clear();
//    chuaxet.resize(V+1, true);
//    pre.resize(V+1, -1);
//}
//void handle()
//{
//    cin>>V>>E;
//    Reset();
//    for(int i=0; i<E; i++) 
//    {
//        int a, b;
//        cin>>a>>b;
//        ke[a].push_back(b);
//        ke[b].push_back(a);
//    }
//    for(int i=1;i<=V;i++){
//    	if (chuaxet[i]) DFS(i);
//	}
//    if(ok==0) cout<<"NO";
//}
//void run(){
//	int T;
//    cin>>T;
//    while(T--){
//    	handle();
//    	cout<<endl;
//	} 
//}
//int main()
//{
//    run();
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int V,E;
bool chuaxet[1005];
int truoc[1005];
int ok;
vector<int> ke[1005];

void reset(){
	ok=0;
	for(int i=0;i<1005;i++){
		chuaxet[i]=true;
	}
	for(int i=0;i<1005;i++){
		ke[i].clear();
	}
	for(int i=0;i<1005;i++){
		truoc[i]=-1;
	}
	
}
void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<ke[u].size();i++){
		if(truoc[u]==ke[u][i]) continue;
		if(chuaxet[ke[u][i]]){
			truoc[ke[u][i]]=u;
			DFS(ke[u][i]);
			
		}
		else{
			ok=1;
			return;
		}
	}
}
void init(){
	cin>>V>>E;
	for(int i=0;i<E;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		reset();
		init();
		for(int i=1;i<=V;i++){
			if(ok==1){
				cout<<"YES";
				break;
			} 
			else if(chuaxet[i]){
				DFS(i);
			}
		}
		if(ok==0) cout<<"NO";
		cout<<endl;
	}
}


