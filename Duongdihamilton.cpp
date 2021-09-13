#include<bits/stdc++.h>
using namespace std;

int V,E,k;
vector<int> ke[1005];
bool chuaxet[1005];
int X[1005];
void hmt(int k){
	for(int i=0;i< ke[X[k-1]][])
}

void init(){
	cin>>V>>E>>k;
	for(int i=0;i<E;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	X[1]=k;
	hmt(k+1)
}


int main()
{
	int T;
	cin>>T;
	while(T--){
		init();
		xuat();
		cout<<endl;
	}
 	return 0;
}
