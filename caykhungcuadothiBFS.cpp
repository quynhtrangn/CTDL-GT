#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool chuaxet[1005];
int V,E,u;
int ok;
vector<int> res;



void BFS(int u){
	queue <int> Q;
	Q.push(u);
	chuaxet[u]=false;
	while(!Q.empty()){
		u= Q.front();
		Q.pop();
		for(int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if(chuaxet[v]==true){
				ok++;
				Q.push(v);
				chuaxet[v]=false;
				res.push_back(u);
				res.push_back(v);
			}
		}
	}
}
void handle(){
	cin>>V>>E>>u;
	ok=0;
	for(int i=0;i<1005;i++){
		ke[i].clear();
	}
	res.clear();
	for(int i=0;i<E;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=0;i<1005;i++){
		chuaxet[i]=true;
	}
	BFS(u);
	if(ok<V-1) cout<<"-1";
	else{
		for(int i=0;i<res.size();i+=2){
			cout<<res[i]<<" "<<res[i+1]<<endl;
		}
	}
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		handle();
	}
 	return 0;
}

