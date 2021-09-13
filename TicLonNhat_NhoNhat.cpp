#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		vector<long> a,b;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			a.push_back(tmp);
		}
		for(int i=0;i<k;i++){
			int tmp;
			cin>>tmp;
			b.push_back(tmp);
		}
		
		long long maxx= *max_element(a.begin(),a.end());
		long long minn= *min_element(b.begin(),b.end());
		long long res=maxx*minn;
		cout<<res<<endl;
	}
 	return 0;
}

