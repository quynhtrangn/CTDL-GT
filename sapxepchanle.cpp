//#include<bits/stdc++.h>
//using namespace std;
//
//bool cmp(long long a, long long b){
//	return a>b;
//}
//void run(){
//	vector<long long> chan;
//	vector<long long> le;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		int x;
//		cin>>x;
//		if(i%2==0) le.push_back(x);
//		else{
//			chan.push_back(x);
//		}
//	}
//	
//	sort(le.begin(),le.end());
//	sort(chan.begin(), chan.end(),cmp);
//	int i=0;
//	int j=0;
//	while(i<chan.size()&&j<le.size()){
//		cout<<le[i++]<<" "<<chan[j++]<<" ";
//	}
//	if(n%2!=0) cout<<le[le.size()-1];
//}
//int main()
//{
//	run();
// 	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
//    int T;
//    cin>>T;
//    while(T--){
        int n;
        cin>>n;
        int a[n+1];
        vector<int> chan;
        vector<int> le;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0) le.push_back(a[i]);
            else{
                chan.push_back(a[i]);
            }
        }
        sort(le.begin(),le.end());
        sort(chan.begin(),chan.end(),cmp);
        int i=0,j=0;
        while(i<le.size()&&j<chan.size()){
            cout<<le[i++]<<" "<<chan[j++]<<" ";
        }
        if(n%2!=0) cout<<le[le.size()-1];
//        
//    }
}
