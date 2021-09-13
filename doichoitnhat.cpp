#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int s=0;
		for(int i=0;i<n-1;i++){
			int minz=a[i];
			int index=i;
			bool ok=false;
			for(int j=i+1;j<n;j++){
				if(minz>a[j]){
					minz=a[j];
					ok=true;
					index=j;
				}
			}
			if(ok==true){
				s++;
			}
			swap(a[i],a[index]);
		}
		cout<<s<<endl;
	}
 	return 0;
}

