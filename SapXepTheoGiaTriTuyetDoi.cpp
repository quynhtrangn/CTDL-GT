#include<bits/stdc++.h>
using namespace std;
int k;
bool cmp(int x, int y){
	if(abs(k-x)>=abs(k-y)){
		return false;
	}
	return true;
}
void handle(){
	int n;
	cin>>n>>k;
	vector< int> a(n);
	for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    stable_sort(a.begin(), a.end(), cmp);
	for(int i = 0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
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


//#include <bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//
//int n, x; 
//
//bool compareAbs(int x1, int x2){
//    if(abs(x-x1) < abs(x-x2)) return true;
//    return false;
//}
//
//void solve(){
//    cin >> n >> x;
//    vector<int> a(n);
//    for(int i = 0; i<n; i++){
//        cin >> a[i];
//    }
//    stable_sort(a.begin(), a.end(), compareAbs);
//    for(int i = 0; i<a.size(); i++){
//        cout << a[i] << " ";
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
