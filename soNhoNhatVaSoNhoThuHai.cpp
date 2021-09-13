#include<bits/stdc++.h>
using namespace std;
void bina_search(int l, int r, int val,int a[]){
	int mid=(l+r)/2;
	if(l>r){
		cout<<-1;
		return;
	} 
	if(a[mid]==val){
		cout<<1;
	}
	if(a[mid]>val) bina_search(l,mid-1,val,a);
	if(a[mid]<val) bina_search(mid+1,r,val,a);
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,x;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			a.push_back(tmp);
		}
		sort(a.begin(),a.end());
		a.erase(unique(a.begin(),a.end()),a.end());
		if(2>a.size()) cout<<-1;
		else{
			for(int i=0;i<2;i++){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
 	return 0;
}

