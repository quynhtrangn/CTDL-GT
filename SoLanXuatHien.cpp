#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int a[1001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int vtrimin= lower_bound(a,a+n,k)-a;
		int vtrimax= upper_bound(a,a+n,k)-a;
		int x=vtrimax-vtrimin;
		if(x) cout<<x;
		else cout<<-1;
		cout<<endl;
	}
 	return 0;
}

