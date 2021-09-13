#include<bits/stdc++.h>
using namespace std;
long long tich(int n, int a){
	n=n%(int)(1e9+7);
	a=a%(int)(1e9+7);
	long long x=(n*a)%(int)(1e9+7);
	return x;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			a.push_back(tmp);
		}
		sort(a.begin(),a.end());
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<" ";
//		}
		long long sum=0;
		for(int i=0;i<n;i++){
			sum=(sum+tich(i,a[i]))%(int)(1e9+7);
			//cout<<tich(i,a[i])<<" ";
			//cout<<sum<<" ";
		}
		cout<<sum<<endl;
		
	}
 	return 0;
}

