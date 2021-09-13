//#include<bits/stdc++.h>
//using namespace std;
//vector< int> ke[1001];
//bool chuaxet[10005];
//
//void DFS(int u){
//	int v;
//	chuaxet[u]=false;
//	cout<<u<<" ";
//	for(int i=0;i<ke[u].size();i++){
//		v=ke[u][i];
//		if(chuaxet[v]){
//			DFS(v);
//		}
//	}
//}
//void handle(){
//	int V,E,k;
//	cin>>V>>E>>k;
//	for(int i=1;i<=E;i++){
//		int u,v; cin>>u>>v;
//		ke[u].push_back(v);
//		ke[v].push_back(u);
//	}
//	for(int i=1;i<=V;i++) chuaxet[i]=true;
//	DFS(k);
//}
//int main()
//{
//	int T=1;
//	cin>>T;
//	while(T--){
//		for(int i=0;i<1001;i++){
//			ke[i].clear();
//		}
//		handle();
//		cout<<endl;
//		
//	}
// 	return 0;
//}

/*

1
13 24 1
1 2 1 3 1 4 2 3 2 4 2 6 3 4 3 5 4 7 5 6 5 7 5 8 5 12 6 7 6 12 7 8 8 12 9 10 9 11 9 13 10 11 10 12 10 13 11 13
1 2 3 4 7 5 6 12 8 10 9 11 13
0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 
0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 
0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 
0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 
0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 

*/
// #include<bits/stdc++.h>
// using namespace std;
// vector< int> ke[1001];
// bool chuaxet[10005];
// void BFS(int u){
// 	int v;
// 	queue<int> qu;
// 	qu.push(u);
	
// 	while(!qu.empty()){
// 		u=qu.front();
// 		qu.pop();
// 		cout<<u<<" ";
// 		chuaxet[u]=false;
// 		for(int i=0;i<ke[u].size();i++){
// 			v=ke[u][i];
// 			if(chuaxet[v]){
// 				chuaxet[v]=false;
// 				qu.push(v);
// 			}
// 		}
// 	}
// }
// void handle(){
// 	int V,E,k;
// 	cin>>V>>E>>k;
// 	for(int i=1;i<=E;i++){
// 		int u,v; cin>>u>>v;
// 		ke[u].push_back(v);
// 		ke[v].push_back(u);
// 	}
// 	for(int i=1;i<=V;i++) chuaxet[i]=true;
// 	BFS(k);
// }
// int main()
// {
// 	int T=1;
// 	cin>>T;
// 	while(T--){
// 		for(int i=0;i<1001;i++){
// 			ke[i].clear();
// 		}
// 		handle();
// 		cout<<endl;
		
// 	}
//  	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool chuaxet[1005];
void reset(){
	for(int i=0;i<1005;i++) ke[i].clear();
	for(int i=0;i<1005;i++) chuaxet[i]=true;
}
void BFS(int u){
	queue<int> qu;
	qu.push(u);
	chuaxet[u]= false;
	while(!qu.empty()){
		u=qu.front();
		qu.pop();
		cout<<u<<" ";
		for(int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if(chuaxet[v]){
				qu.push(v);
				chuaxet[v]=false;
			}
		}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int V,E,bi;
		cin>>V>>E>>bi;
		reset();
		for(int i=1;i<=E;i++){
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		BFS(bi);
		cout<<endl;
	}
}