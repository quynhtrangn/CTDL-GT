// #include<bits/stdc++.h>
// using namespace std;
// vector< int> ke[1001];
// bool chuaxet[10005];
// int a[100][100];
// void DFS(int u){
// 	int v;
// 	chuaxet[u]=false;
// 	cout<<u<<" ";
// 	for(int i=0;i<ke[u].size();i++){
// 		v=ke[u][i];
// 		if(chuaxet[v]){
// 			DFS(v);
// 		}
// 	}
// }
// void handle1(){
// 	int V,E,k;
// 	cin>>V>>E>>k;
// 	for(int i=1;i<=E;i++){
// 		int u,v; cin>>u>>v;
// 		ke[u].push_back(v);
// 		ke[v].push_back(u);
// 	}
// 	for(int i=1;i<=V;i++) chuaxet[i]=true;
// 	DFS(k);
// }
// void handle(){
// 	int n;
	
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




//#include<bits/stdc++.h>
//using namespace std;
//vector< int> ke[1001];
//bool chuaxet[10005];
///*
//
//1
//13 24 1
//1 2 1 3 1 4 2 3 2 4 2 6 3 4 3 5 4 7 5 6 5 7 5 8 5 12 6 7 6 12 7 8 8 12 9 10 9 11 9 13 10 11 10 12 10 13 11 13
//1 2 3 4 7 5 6 12 8 10 9 11 13
//0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
//1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
//1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
//1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
//0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 
//0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 
//0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 
//0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 
//0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 
//0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 
//0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 
//0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 
//0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 
//
//*/
//void DFS(int u){
//	int v;
//	stack<int> st;
//	st.push(u);
//	chuaxet[u]=false;
//	cout<<u<<" ";
//	while(!st.empty()){
//		u=st.top();
//		st.pop();
//		for(int i=0;i<ke[u].size();i++){
//			v=ke[u][i];
//			if(chuaxet[v]){
//				cout<<v<<" ";
//				chuaxet[v]=false;
//				st.push(u);
//				st.push(v);
//				break;
//			}
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

#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1001];
bool chuaxet[1001];
int V, E, bi;
void DFS(int u){
	chuaxet[u]=false;
	cout<<u<<" ";
	for(int i=0;i<ke[u].size();i++){
		if(chuaxet[ke[u][i]]){
			DFS(ke[u][i]);
		}
	}
}
void reset(){
	for(int i=0;i<1001;i++) ke[i].clear();
	for(int i=0;i<1001;i++){
		chuaxet[i]=true;
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>V>>E>>bi;
		reset();
		for(int i=1;i<=E;i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		// for(int i=1;i<=V;i++){
		// 	sort(ke[i].begin(),ke[i].end());
		// }
		DFS(bi);
		cout<<endl;
	}
}