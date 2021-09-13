//#include<bits/stdc++.h>
//using namespace std;
//int a[1000001]={0};
//void sang(){
//	a[0]=1;
//	a[1]=1;
//	for(int i=2;i<1000;i++){
//		if(a[i]==0){
//			for(int j=i*2;j<1000001;j+=i){
//				a[j]=1;
//			}
//		}
//	}
//}
//void solve(int n){
//	for(int i=2;i<=n;i++){
//		if(a[i]==0){
//			int tmp=n-i;
//			if(a[tmp]==0){
//				cout<<i<<" "<<tmp;
//				return;
//			}
//		}
//	}
//	cout<<-1;
//}
//int main()
//{
//	int T;
//	cin>>T;
//	sang();
//	while(T--){
//		int n;
//		cin>>n;
//		solve(n);
//		cout<<endl;
//	}
// 	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
int a[1000001]={0};
void sang(){
	a[0]=1;
	a[1]=1;
	for(int i=2;i<10001;i++){
		for(int j=i*2;j<1000001;j+=i){
			a[j]=1;
		}
	}
}
void solve(int n){
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			int tmp=n-i;
			if(a[tmp]==0){
				cout<<i<<" "<<tmp;
				return;
			}
		}
	}
	cout<<-1;
}
int main()
{
	int T;
	cin>>T;
	sang();
	while(T--){
		int n;
		cin>>n;
		solve(n);
		cout<<endl;
	}
 	return 0;
}


