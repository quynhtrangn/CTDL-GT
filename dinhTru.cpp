#include<bits/stdc++.h>
using namespace std;
int n;
int chuaxet[10000];
vector <int> ke[1000];
void BF(int u){
	queue<int> Q;
	Q.push(u);
	chuaxet[u]=false;
	
	while(!Q.empty()){
		u=Q.front();
		Q.pop();
		//chuaxet[u]=false;
		cout<<u <<" ";
		for(int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if(chuaxet[v]){
				Q.push(v);
				chuaxet[v]=false;
				//cout<<v<<" ";
			}
		}	
	}
	
}
void BFS(int u){
	int v;
	queue<int> qu;
	qu.push(u);
	
	while(!qu.empty()){
		u=qu.front();
		qu.pop();
		cout<<u<<" ";
		chuaxet[u]=false;
		for(int i=0;i<ke[u].size();i++){
			v=ke[u][i];
			if(chuaxet[v]){
				chuaxet[v]=false;
				qu.push(v);
				
			}
		}
	}
}
void handle(){ 
	int E, V;
	cin>>V>>E;
	
	for(int i=1;i<=E;i++){
		int u,v;	cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	for(int i=1;i<=V;i++){
		chuaxet[i]=true;
	}
	BFS(1);
}
void run(){
	int T;
	cin>>T;
	while(T--){
		for(int i=0;i<1001;i++){
			ke[i].clear();
		}
		handle();
	}
}
int main()
{
	run();
 	return 0;
}

