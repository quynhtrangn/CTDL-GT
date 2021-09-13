#include<bits/stdc++.h>
using namespace std;
vector< int> ke[1001];
bool chuaxet[10005];
int a[100][100];
void DS(int u){
	int v;
	chuaxet[u]=false;
	cout<<u<<" ";
	for(int i=0;i<ke[u].size();i++){
		v=ke[u][i];
		if(chuaxet[v]){
			DS(v);
		}
	}
}
void handle1(){
	int V,E,k;
	cin>>V>>E>>k;
	for(int i=1;i<=E;i++){
		int u,v; cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	for(int i=1;i<=V;i++) chuaxet[i]=true;
	DS(k);
}
void DFS(int u){
	int v;
	stack<int> st;
	st.push(u);
	chuaxet[u]=false;
	cout<<u<<" ";
	while(!st.empty()){
		u=st.top();
		st.pop();
		for(int i=0;i<ke[u].size();i++){
			v=ke[u][i];
			if(chuaxet[v]){
				cout<<v<<" ";
				chuaxet[v]=false;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}
void handle(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				ke[i].push_back(j);	
			}
		}
	}
	for(int i=1;i<=n;i++) chuaxet[i]=true;
	DFS(1);
	
}
int main()
{
//	for(int i=0;i<1001;i++){
//		ke[i].clear();
//	}
	handle();
	//cout<<endl;
 	return 0;
}
/*
0 1 1 1 0 0 0 0 0 0 0 0 0 
1 0 1 1 0 1 0 0 0 0 0 0 0 
1 1 0 1 1 0 0 0 0 0 0 0 0 
1 1 1 0 0 0 1 0 0 0 0 0 0 
0 0 1 0 0 1 1 1 0 0 0 1 0 
0 1 0 0 1 0 1 0 0 0 0 1 0 
0 0 0 1 1 1 0 1 0 0 0 0 0 
0 0 0 0 1 0 1 0 0 0 0 1 0 
0 0 0 0 0 0 0 0 0 1 1 0 1 
0 0 0 0 0 0 0 0 1 0 1 1 1 
0 0 0 0 0 0 0 0 1 1 0 0 1 
0 0 0 0 1 1 0 1 0 1 0 0 0 
0 0 0 0 0 0 0 0 1 1 1 0 0
*/
