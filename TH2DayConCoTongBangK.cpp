#include<bits/stdc++.h>
using namespace std;
int a[100];
int b[100];
int n,k;
int ok;
void xuat(){
	vector<int> save;
	int dem=0;
	for(int i=0;i<n;i++){
		if(b[i]==0){
			dem+=a[i];
			save.push_back(a[i]);
		}
	}
	if(dem==k){
		ok=1;
		cout<<"[";
		for(int i=0;i<save.size()-1;i++){
			cout<<save[i]<<" ";
		}
		cout<<save[save.size()-1]<<"]"<<' ';
	}
}
void nhiphan(){
	for(int i=0;i<n;i++){
		b[i]=0;
	}
	int i=n-1;
	while(1){
		xuat();
		i=n-1;
		while(b[i]==1&&i>=0) i--;
		if(i<0) break;
		b[i]=1;
		for(int j=i+1;j<n;j++) b[j]=0;
	}
	if(ok==0) cout<<-1;
}
void handle(){
	cin>>n>>k;
	ok=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	nhiphan();
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		handle();
		cout<<endl;	
	}
 	return 0;
}

