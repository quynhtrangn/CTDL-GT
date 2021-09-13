//#include<bits/stdc++.h>
//using namespace std;
//int n;
//struct so{
//	int giatri;
//	int xuathien;
//};
//
//
//
//
//bool cmp(so x, so y){
//	if(x.xuathien==y.xuathien&& x.giatri<y.giatri) return true;
//	return x.xuathien>y.xuathien;
//}
//void handle(){
//	cin>>n;
//	so a[n+1];
//	int b[100006]={0};
//	for(int i=0;i<n;i++){
//		cin>>a[i].giatri;
//		b[a[i].giatri]++;
//	}
//	for(int i=0;i<n;i++){
//		a[i].xuathien= b[a[i].giatri];
//	}
//	sort(a,a+n,cmp);
//	for(int i=0;i<n;i++){
//		cout<<a[i].giatri<<" ";
//		
//	}
//}
//int main()
//{
//	int T;
//	cin>>T;
//	while(T--){
//		handle();
//		cout<<endl;
//	}
// 	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int n;
struct so{
	int giatri;
	int xuathien;
};

bool cmp(so x, so y){
	if(x.xuathien==y.xuathien&&x.giatri<y.giatri) return true;
	if(x.xuathien>y.xuathien) return true;
	return false;
}
void handle(){
	cin>>n;
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
