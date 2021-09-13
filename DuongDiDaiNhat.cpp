#include<bits/stdc++.h>
using namespace std;
vector< int> ke[1001];
bool chuaxet[10005];
void DFS(int u){
	int v;
	stack<int> st;
	st.push(u);
	chuaxet[u]=false;
	while(!st.empty()){
		u=st.top();
		st.pop();
		for(int i=0;i<ke[u].size();i++){
			v=ke[u][i];
			if(chuaxet[v]){
				chuaxet[v]=false;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}
void handle(){
	int V,E,k;
	cin>>V>>E;
	for(int i=1;i<=E;i++){
		int u,v; cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
	int maxx=0;
	for(int i=1;i<=V;i++){
		int dem=0;
		for(int i=1;i<=V;i++) chuaxet[i]=true;
		DFS(i);
		for(int j=1;j<=V;j++){
			if(chuaxet[j]==false) dem++;
		}
		if(dem>maxx) maxx=dem;
	}
	cout<<maxx<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--){
		handle();
		cout<<endl;
		for(int j=0;j<1001;j++){
			ke[j].clear();
		}
	}
 	return 0;
}


