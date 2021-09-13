#include<bits/stdc++.h>
using namespace std;
int E, V;
int ok;
bool chuaxet[1001];
vector<int> ke[1001];
int truoc[1001];
void BFS(int u){
	queue <int> Q;
	Q.push(u);
	chuaxet[u]=false;
	if(ok==1) return;
	while(!Q.empty()){
		int k=Q.front();
		Q.pop();
		for(int i=0;i<ke[k].size();i++){
			int v= ke[k][i];
			if(truoc[k]==v) continue;
			if(chuaxet[v]){
				Q.push(v);
				truoc[v]=k;
				chuaxet[v]=false;
			}
			else{
				ok=1;
				return;
			}
			
		}
	}
}

void reset(){
	ok=0;
	for(int i=1;i<=1001;i++){
		chuaxet[i]=true;
	}
	for(int i=1;i<1001;i++){
		ke[i].clear();
	}
	for(int i=1;i<1001;i++){
		truoc[i]=-1;
	}
}

void init(){
	cin>>V>>E;
	for(int i=1;i<=E;i++){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
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
				BFS(i);
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
