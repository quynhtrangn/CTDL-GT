#include<bits/stdc++.h>
using namespace std;

void run(){
	int T;
	cin>>T;
	while(T--){
		priority_queue<long long, vector<long long>, greater<long long> > Q;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int z;
			cin>>z;
			Q.push(z);
		}
		long long tong=0;
		long long chiphi=0;
		while(Q.size()>=2){
			long long s1=Q.top();
			Q.pop();
			long long s2=Q.top();
			Q.pop();
			tong=s1+s2;
			chiphi+=tong;
			//if(Q.empty()) break;
			Q.push(tong);
		}
		cout<<chiphi<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

