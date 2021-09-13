#include<bits/stdc++.h>
using namespace std;
int n;
vector <string> ans1;
vector <string> ans2;
int a[100];
bool checked[100];
void Try1(int i){
	for(int j=1;j<=n;j++){
		if(!checked[j]){
			a[i]=j;
			checked[j]=true;
			if(i==n-1){
				string tmp="";
				for(int l=0;l<n;l++) tmp= tmp+(char)(a[l]+'A'-1);
				ans1.push_back(tmp);
			}
			else Try1(i+1);
			checked[j]=false;
		}
	}
}

void Try2(int i){
	for(int j=1;j<=n;j++){
//		if(!checked[j]){
			a[i]=j;
//			checked[j]=true;
			if(i==n-1){
				string tmp="";
				for(int l=0;l<n;l++) tmp= tmp+(char)(a[l]+'0');
				ans2.push_back(tmp);
			}
			else Try2(i+1);
//			checked[j]=false;
//		}
	}
}
void run(){
	cin>>n;
	for(int i=0;i<n;i++){
		checked[i]= false;
	}
	Try1(0);
	Try2(0);
	for(int i=0;i<ans1.size();i++){
		for(int j=0;j<ans2.size();j++){
			cout<<ans1[i]<<ans2[j]<<endl;
		}
	}
	ans1.clear();
	ans2.clear();
}
int main()
{
	run();
 	return 0;
}

