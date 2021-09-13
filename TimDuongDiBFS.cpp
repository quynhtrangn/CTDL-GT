#include<bits/stdc++.h>
using namespace std;
vector< int> ke[1001];
bool chuaxet[10005];
int a[100][100];
int truoc[1000];
int s,t;
void DFS(int u){
	int v;
	chuaxet[u]=false;
	cout<<u<<" ";
	for(int i=0;i<ke[u].size();i++){
		v=ke[u][i];
		if(chuaxet[v]){
			DFS(v);
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
				truoc[v]=u;
			}
		}
	}
}
void handle1(){
	int V,E;
	cin>>V>>E>>s>>t;
	for(int i=1;i<=E;i++){
		int u,v; cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	for(int i=1;i<=V;i++) chuaxet[i]=true;
	BFS(s);
	cout<<endl;
}
void truyvet(){
	int u=t;
	int p[1000];
	int d=0;
	while(u!=s){
		d++;
		p[d]=u;
		u=truoc[u];
	}
	d++; p[d]=u;
	cout<<"Do dai duong di "<<d-1<<endl;
	for(int i=d;i>=1;i--){
		cout<<p[i]<<' ';
	}
}
int main()
{
//	for(int i=0;i<1001;i++){
//		ke[i].clear();
//	}
	handle1();
	truyvet();
	//cout<<endl;
 	return 0;
}
