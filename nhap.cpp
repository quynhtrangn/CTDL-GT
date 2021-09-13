#include<bits/stdc++.h>
using namespace std;
int n;
class so{
	public:
		int giatri;
		int xuathien;
};
bool cmp(so a, so b){
	if(a.xuathien==b.xuathien&&a.giatri<b.giatri) return true;
	return a.xuathien>b.xuathien;
}
void handle(){
	so a[n+1];
	int b[100006]={0};
	for(int i=0;i<n;i++){
		cin>>a[i].giatri;
		b[a[i].giatri]++;
	}
	for(int i=0;i<n;i++){
		a[i].xuathien=b[a[i].giatri];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i].giatri<<" ";
	}
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		handle();
	}
 	return 0;
}

