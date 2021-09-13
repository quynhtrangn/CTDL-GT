#include<bits/stdc++.h>
using namespace std;
#define MAX 1005
int n,V,E;
vector<int> ke[MAX];
vector<pair<int, int> > canh;
bool chuaxet[MAX];

bool BFS(int f, int s){
	int v;
	queue <int> st;
	st.push(f);
	chuaxet[f]=false;
	while(!st.empty()){
		f=st.front();
		st.pop();
		for(int i=0;i<ke[f].size();i++){
			v=ke[f][i];
			if(v==s) return false;
			if(chuaxet[v]){
				chuaxet[v]=false;
				st.push(v);
			}
			
		}
	}
	return true;
}
void reset(){
	for(int i=1;i<=V;i++){
		chuaxet[i]=true;
	}
	for(int j=0;j<MAX;j++){
		ke[j].clear();
	}
}
void init(){
	cin>>V>>E;
	for(int i=0;i<E;i++){
		int n1, n2;
		cin>>n1>>n2;
		pair<int,int> tmp;
		tmp.first=n1;
		tmp.second=n2;
		canh.push_back(tmp);
	}
	
}
void canhcau(){
	for(int i=0;i<E;i++){
		reset();
		int first= canh[i].first;
		int second= canh[i].second;
		for(int j=0;j<E;j++){
			if(i!=j){
				int n1=canh[j].first;
				int n2=canh[j].second;
				ke[n1].push_back(n2);
				ke[n2].push_back(n1);
			}
		}
		if(BFS(first, second)){
			cout<< first<<' '<<second<<' ';
		}
		
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		init();
		canhcau();
		canh.clear();
		cout<<endl;
	}
	
}
