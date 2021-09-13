#include<bits/stdc++.h>
using namespace std;
class dothi{
	public:
		int n;
		vector< int> ke[1001];
		bool chuaxet[10005];
		int a[100][100];
		void DFS(int u);
		void init();
		void khoitao();
		void handle();
		
};


void dothi::DFS(int u){
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
void dothi::init(){
	
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j])
                ke[i].push_back(j);
		}
	}
}

void dothi::khoitao(){
	for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void dothi :: handle(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				ke[i].push_back(j);	
			}
		}
	}
	int dem=0;
	for(int i=1;i<=n;i++){
		if(chuaxet[i]){
			dem++;
			DFS(i);	
		}
	}
	cout<<dem;
}
int main()
{	
	dothi matran;
	matran.init();
	matran.khoitao();
	matran.handle();
 	return 0;
}
