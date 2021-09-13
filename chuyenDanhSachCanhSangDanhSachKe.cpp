// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int T; 
// 	cin>>T;
// 	while(T--){
// 		vector <int > a[10001];
// 		int V,E;
// 		cin>>V>>E;
// 		for(int i=0;i<E;i++){
// 			int u,v;
// 			cin>>u>>v;
// 			a[u].push_back(v);
// 			a[v].push_back(u);
// 		}
// 		for(int i=0;i<=V;i++){
// 			if(a[i].size()){
// 				cout<<i<<": ";
// 				for(int j=0;j<a[i].size();j++){
// 					sort(a[i].begin(),a[i].end());
// 					cout<<a[i][j]<<" ";
// 				}
// 				cout<<endl;	
// 			}
			
// 		}
// 	}
	
//  	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void run(){
	int V,E;
	cin>>V>>E;
	vector<int> ke[1005];
	for(int i=1;i<=E;i++){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	for(int i=1;i<=V;i++){
		cout<<i<<": ";
		for(int j=0;j<ke[i].size();j++){
			cout<<ke[i][j]<<' ';
		}
		cout<<endl;
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		run();
	}
}