#include<bits/stdc++.h>
using namespace std;
int a[10][10];

int n;
bool chuaxet[100];
void DFS(int u){
	stack<int> S;
	S.push(u);
	chuaxet[u]=false;
	cout<<u<<" ";
	while(!S.empty()){
		u=S.top();
		S.pop();
		for(int i=1;i<=n;i++){
			int v=a[u][i];
			if(chuaxet[i]&&a[u][i]){
				cout<<i<<" ";
				S.push(u);
				S.push(v);
				chuaxet[i]=false;
				break;
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
		chuaxet[i]=true;
	}
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(chuaxet[i]){
			tplt++;
			DFS(i);
		}
	}
	cout<<"\nthanh phan lien thong: "<<tplt;
}
