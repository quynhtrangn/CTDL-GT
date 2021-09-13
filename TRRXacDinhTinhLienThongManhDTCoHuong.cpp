#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class dothi{
	public:
		int n,E;
		//int a[MAX][MAX];
		vector<int> ke[MAX];
		bool chuaxet[MAX];
		void readdata();
		void init();
		void BFS(int u);
		void run();
};
void dothi::readdata(){
	cin>>n>>E;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cin>>a[i][j];
//			if(a[i][j]==1){
//				ke[i].push_back(j);
//			}
//		}
//	}
	for(int i=1;i<=E;i++){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
	}
}
void dothi:: init(){
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
	}
}
void dothi::BFS(int u){
	queue<int> Q;
	Q.push(u);
	//chuaxet[u]=false;
	while(!Q.empty()){
		u=Q.front();
		Q.pop();
		chuaxet[u]=false;
		for(int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if(chuaxet[v]){
				Q.push(v);
				chuaxet[v]=false;
			}
		}
	}
		
}
void dothi::run(){
	readdata();
	init();
	for(int i=1;i<=n;i++){
		BFS(i);
		for(int j=1;j<=n;j++){
			if(chuaxet[j]){
				cout<<"NO";
				return;
			}
		}
		init();
	}
	cout<<"YES";
}
int main()
{
	int T; cin>>T;
	while(T--){
		dothi g;
		g.run();
		cout<<endl;	
	}
 	return 0;
}

