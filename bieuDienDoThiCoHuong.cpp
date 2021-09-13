#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T; 
	cin>>T;
	while(T--){
		vector <int > a[10001];
		int V,E;
		cin>>V>>E;
		for(int i=1;i<=E;i++){
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			//a[v].push_back(u);
		}
		for(int i=1;i<=V;i++){
			sort(a[i].begin(),a[i].end());
			cout<<i<<": ";
			for(int j=0;j<a[i].size();j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;	
		}
	}
	
 	return 0;
}
//#include <bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//
//vector< vector<int> > x;
//
//void solve(){
//    int t; cin >> t;
//    while(t--){
//        int V, E; cin >> V >> E;
//        x.resize(V+1);
//        for(int i = 0; i <E; i++){
//            int a, b; cin >> a >> b;
//            x[a].push_back(b);
//        }
//        for(int i = 1; i<=V; i++){
//            sort(x[i].begin(), x[i].end());
//            cout << i << ": ";
//            for(int j = 0; j<x[i].size(); j++){
//                cout << x[i][j] << " ";
//            }
//            cout << endl;
//        }
//        x.clear();
//    }
//}
//
//void fastIO(){
//    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//}
//
//int main(){
//    fastIO();
//    solve();
//    return 0;
//}
