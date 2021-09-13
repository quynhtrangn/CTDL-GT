#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10000];
vector<string> b;
bool check(){
	int dem=0;
	for(int i=1;i<=n;i++){   // 000010 11100 0
		int dd=0;
		while(a[i]==0&&i<=n){
			dd++;
			i++;
			if(dd>k) return false;
		}
		if(dd==k) dem++;
	}
	if(dem==1) return true;
	return false;
}
void xuat(){
	cout<<b.size()<<endl;
	for(int x=0;x<b.size();x++){
		cout<<b[x]<<endl; 
	}
	b.clear();
}
void sinh(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(check()){
				string tmp="";
				for(int x=1;x<=n;x++){
					tmp=tmp+(char)('A'+a[x]); 
				}
				b.push_back(tmp);
			}
		}else{
			sinh(i+1);
		}
	}
	
}
void run(){
//	int T;
//	cin>>T;
//	while(T--){
		cin>>n>>k;
		a[0]=0;
		sinh(1);
		xuat();
//	}
}
int main()
{
	run();
 	return 0;
}

