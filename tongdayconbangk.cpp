#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >res;
int n, k;
int a[100];
int s=0;
int x[100];
void sinh(int i){
	if(s==k){
		vector<int> tmp;
		for(int w=1;w<i;w++){
			tmp.push_back(a[x[w]]);
		}
		res.push_back(tmp);
	}
	for(int j=x[i-1]+1;j<=n;j++){
		x[i]=j;
		s+=a[j];
		if(s<=k) sinh(i+1);
		s-=a[j];
	}
}
int main()
{
	cin>>n>>k;
	x[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	sinh(1);
	for(int i=res.size()-1;i>=0;i--){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<res.size();
 	return 0;
}

