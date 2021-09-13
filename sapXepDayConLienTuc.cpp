#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> b;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int tmp; cin>>tmp;
			a.push_back(tmp);
			b.push_back(tmp);
		}
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				cout<<i+1<<" ";
				break;	
			} 
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				cout<<i+1<<endl;
				break;	
			} 
		}
		a.clear();
		b.clear();
	}
 	return 0;
}

