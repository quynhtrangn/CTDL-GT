#include<bits/stdc++.h>
using namespace std;
int n;
int chuaxet[10000];
int E, V;
vector <int> ke[1000];

void BF(int u){
	queue<int> Q;
	Q.push(u);
	chuaxet[u]=false;
	
	while(!Q.empty()){
		u=Q.front();
		Q.pop();
		//chuaxet[u]=false;
		//cout<<u <<" ";
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
		//cout<<u<<" ";
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
void reset(){
	for(int i=1;i<=V;i++){
		chuaxet[i]=true;
	}	
}
void handle(){ 
	int a[10000]={0};
	cin>>V>>E;
	for(int i=1;i<=E;i++){
		int u,v;	cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	reset();
	int demlt=0;
	for(int i=1;i<=V;i++){
		if(chuaxet[i]){
			demlt++;
			BFS(i);
		}
	}
//	for(int i=1;i<=V;i++){
//		if(chuaxet[i]){
//			demlt++;
//			BFS(i);
//		}
//	}
	reset();
	
	for(int i=1;i<=V;i++){
		int demltm=0;
		chuaxet[i]=false;
		for(int j=1;j<=V;j++){
			if(chuaxet[j]){
				demltm++;
				BFS(j);
			}
		}
		if(demlt<demltm){
			a[i]=1;
		}
		reset();
	}
	//int dinhtru=0;
	for(int i=0;i<1000;i++){
		if(a[i]==1){
		//	cout<<"Dinh tru la dinh thu: ";
			cout<<i<<" ";

		}
	}
	
}
void run(){
	int T;
	cin>>T;
	while(T--){
		for(int i=0;i<1001;i++){
			ke[i].clear();
		}
		handle();
		cout<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

