#include<bits/stdc++.h>
using namespace std;
int V,E;
vector<int> ke[1005];
void init(){
	cin>>V>>E;
	for(int i=0;i<E;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		//ke[y].push_back(x);
	}
}
int check(int x){
	int dem=0;
	for(int i=1;i<=V;i++){
		for(int j=0;j<ke[i].size();j++){
			if(ke[i][j]==x) dem++;
		}
	}
	return dem;
}
void xuat(){
	for(int i=1;i<=V;i++){
		if(check(i)!=ke[i].size()){
			cout<<0;
			return;
		}
	}
	cout<<1;
	
	return;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		init();
		xuat();
		for(int i=1;i<=V;i++){
			ke[i].clear();
		}
		cout<<endl;
	}
 	return 0;
}

