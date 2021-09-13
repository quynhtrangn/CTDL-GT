#include<bits/stdc++.h>
using namespace std;

int N,M;
int a[501][501];
bool chuaxet[501][501];
int r[]={-1,-1,-1,0,0,1,1,1};
int c[]={-1,0,1,-1,1,-1,0,1};

void DFS(int i, int j){
	chuaxet[i][j]=false;
	for(int l=0;l<8;l++){
		int x= i+r[l];
		int y= j+c[l];
		if(x>0&&y>0&&x<=N&&y<=M&&chuaxet[x][y]==true&&a[x][y]==1){
			DFS(x,y);
		}
	}
}
void handle(){
	cin>>N>>M;
	for(int i=0;i<501;i++){
		for(int j=0;j<501;j++){
			chuaxet[i][j]=true;
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>a[i][j];
		}
	}
	int tong=0;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			if(chuaxet[i][j]&&a[i][j]==1){
				tong++;
				DFS(i,j);
			}
		}
	}
	cout<<tong<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		handle();
	}
 	return 0;
}
