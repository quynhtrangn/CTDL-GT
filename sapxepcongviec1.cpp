#include<bits/stdc++.h>
using namespace std;
struct Work{
	int bi;
	int en;
};
bool cmp(Work a, Work b){
	if(a.en==b.en&&a.bi>b.bi) return true;
	return a.en<b.en;
}
int main()
{
	int T;
	cin>>T;
	int n;
	while(T--){
		cin>>n;
		Work work[n+3];
		for(int i=0;i<n;i++){
			cin>>work[i].bi;
		}
		for(int i=0;i<n;i++){
			cin>>work[i].en;
		}
		sort(work,work+n,cmp);
		int dem=1;
		int i=0;
		for(int j=1;j<n;j++){
			if(work[i].en<=work[j].bi){
				dem++;
				i=j;
				//cout<<work[j].bi<<" "<<work[j].en<<endl;
			}
		}
		cout<<dem<<endl;
	}
	
 	return 0;
}

