#include<bits/stdc++.h>
using namespace std;
int V, E;
bool chuaxet[1005];
vector<int> ke[1005];
void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<ke[u].size();i++){
		if(chuaxet[ke[u][i]]){
			DFS(ke[u][i]);
		}
	}
}
void reset(){
	for(int i=1;i<=V;i++){
		chuaxet[i]=true;
	}
}
void init(){
	for(int i=1;i<=E;i++){
		int u,v;	cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
}
void handle(){
	init();
	reset();
	int demlt=0;
	int a[1005]={0};
	for(int i=1;i<=V;i++){
		if(chuaxet[i]){
			demlt++;
			DFS(i);
		}
	}
	for(int i=1;i<=V;i++){
		reset();
		int demltm=0;
		chuaxet[i]=false;
		for(int j=1;j<=V;j++){
			if(chuaxet[j]){
				demltm++;
				DFS(j);
			}
		}
		if(demlt<demltm){
			a[i]=1;
		}
		
	}
	for(int i=0;i<1000;i++){
		if(a[i]==1){
			cout<<i<<" ";
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		cin>>V>>E;
		for(int i=0;i<1001;i++){
			ke[i].clear();
		}
		handle();
		cout<<endl;
	}
	
 	return 0;
}

