//#include <bits/stdc++.h>
//#define endl '\n'
//using namespace std;
// 
//void solve(){
//    int n, m; cin >> n >> m;
//    vector<int> tick(100005, 0);
//    for(int i = 0; i<n+m; i++){
//        int tmp; cin >> tmp;
//        tick[tmp]++;
//    }
//    for(int i = 0; i<100005; i++){
//        if(tick[i]!=0) cout << i << " ";
//    }
//    cout << endl;
//    for(int i = 0; i<100005; i++){
//        if(tick[i]>1) cout << i << " ";
//    }
//    cout << endl;
//}
// 
//void fastIO(){
//    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//}
// 
//int main(){
//    fastIO();
//    int t = 1; cin >> t; 
//    while(t--) solve();
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

void handle(){
	int n,m;
	cin>>n>>m;
	vector<int> c(1000001,0);
	for(int i=0;i<n+m;i++){
		int tmp; cin>>tmp;
		c[tmp]++;	
	}

	for(int i=0;i<100001;i++){
		if(c[i]!=0) cout<<i<<" ";
	}
	cout<<endl;
	for(int i=0;i<100001;i++){
		if(c[i]>1) cout<<i<<" ";
	}
	cout<<endl;
}
int main()
{	
	int T=1;
	cin>>T;
	while(T--){
		handle();
	}
 	return 0;
}
