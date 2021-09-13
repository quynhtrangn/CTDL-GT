#include<bits/stdc++.h>
using namespace std;
int E, V;
int ok;
int chuaxet[1005];
vector<int> ke[1005];
int truoc[1005];

void DFS(int u){
	chuaxet[u]=0;
	for(int i=0;i<ke[u].size();i++){
		int v= ke[u][i];
		if(chuaxet[v]==0){
			ok=1;
			return;
		}
		if(chuaxet[v]){
			DFS(v);
		}
		
	}
	chuaxet[u]=12;
}
void reset(){
	ok=0;
	for(int i=1;i<1005;i++){
		chuaxet[i]=1;
	}
	for(int i=1;i<1005;i++){
		ke[i].clear();
	}
	
}
void init(){
	cin>>V>>E;
	for(int i=1;i<=E;i++){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
	}
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		reset();
		init();
		for(int i=1;i<=V;i++){
			if(chuaxet[i]){
				DFS(i);
			}
			if(ok==1){
				cout<<"YES";
				break;
			} 
		}
		if(ok==0) cout<<"NO";
		cout<<endl;
	}
 	return 0;
}
