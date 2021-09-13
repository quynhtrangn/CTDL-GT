#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int a[12];
int dem;
void check(){
	
}
void tohop(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int tong=0;
			for(int l=0;l<=k;l++){
				tong+=a[l];
			}
			if(tong==s) dem++;
		}
		else tohop(i+1);
	}
	

}
int main()
{
	while(1){
		cin>>n>>k>>s;
		dem=0;
		for(int i=0;i<12;i++){
			a[i]=0;
		}
		if(n==0&&k==0&&s==0) break;
		tohop(1);
		cout<<dem<<endl;
	}
 	return 0;
}

