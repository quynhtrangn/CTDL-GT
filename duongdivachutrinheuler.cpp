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
		ke[y].push_back(x);
	}
}
void xuat(){
	int le=0;
	int chan=0;
	for(int i=1;i<=E;i++){
		if(ke[i].size()%2==0) chan++;
		else le++;
	}
	if(le==0) cout<<2;
	else if(le==2) cout<<1;
	else cout<<0;
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

