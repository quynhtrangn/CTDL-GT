#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n, d;
		cin>>n>>d;
		int lim = d*9;
		if(n>lim||n==0){
			cout<<-1;
		}
		else{
			int dem=0;
			while(n-9>0){
				a.push_back(9);
				n-=9;
				dem++;
			}
			
			if(dem+1==d){
				a.push_back(n);
			}
			else{
				a.push_back(n-1);
				dem++;
				while(dem<d-1){
					a.push_back(0);
					dem++;
				}
				a.push_back(1);
			}
			for(int i=a.size()-1;i>=0;i--){
				cout<<a[i];
			}	
			
		}
		cout<<endl;
		a.clear();	
	}
	
 	return 0;
}

